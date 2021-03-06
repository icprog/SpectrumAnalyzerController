#include "stdafx.h"
#include "AV4024.h"
#include "SpectrumAnalyzerController.h"

using namespace System::Runtime::InteropServices;

#pragma region 仪器连接
/// <summary>
/// 打开频谱仪
/// </summary>
/// <param name="isUsb">if set to <c>true</c> 使用USB接口</param>
/// <param name="ip">IP地址</param>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectConnect(bool isUsb, String ^ip)
{
	ViRsrc ResourceName;
	if (isUsb)
	{
		ViRsrc ResName[256];
		ViSession defaultRM;
		ViFindList fList;
		ViUInt32 num;
		viOpenDefaultRM(&defaultRM);
		viFindRsrc(defaultRM, "USB?::0x045F::0x00CE::?*::RAW", &fList, &num, *ResName);
		ResourceName = *ResName;
	}
	else
	{
		String^ ResourceStr = "TCPIP0::" + ip + "::5000::SOCKET";
		ResourceName = (ViRsrc)Marshal::StringToHGlobalAnsi(ResourceStr).ToPointer();
	}
	ViSession vi;
	ViStatus status = AV4024_init(ResourceName, VI_FALSE, VI_FALSE, &vi);
	if (status == 0)
	{
		ViSess = vi;
	}
	Marshal::FreeHGlobal((IntPtr)ResourceName);
	return status;
}

/// <summary>
/// 清除频谱仪状态
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectCls()
{
	ViStatus status = AV4024_CLS((ViSession)ViSess);
	return status;
}

/// <summary>
/// 复位频谱仪
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectRest()
{
	ViStatus status = AV4024_Reset((ViSession)ViSess);
	return status;
}

/// <summary>
/// Opc命令执行情况查询
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectOpcQuery()
{
	ViOpc = 0;
	ViInt32 val = ViOpc;
	ViStatus status = AV4024_QueryOPC((ViSession)ViSess, &val);
	ViOpc = val;
	return status;
}

/// <summary>
/// 关闭频谱仪
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectClose()
{
	ViStatus status = AV4024_close((ViSession)ViSess);
	return status;
}
#pragma endregion

#pragma region 仪器模式设置
/// <summary>
/// 查询频谱仪可用模式
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectAvaiModeQuery()
{
	ViInt32 mode;
	ViStatus status = AV4024_QueryInstCatalog((ViSession)ViSess, &mode);
	if (status == 0)
	{
		ViAvaiMode = mode;
	}
	return status;
}

/// <summary>
/// 查询频谱仪当前模式
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectNowModeQuery()
{
	ViInt32 m;
	ViStatus status = AV4024_QueryInstSel((ViSession)ViSess, &m);
	if (status == 0)
	{
		ViNowMode = m;
	}
	return status;
}

/// <summary>
/// 设置频谱仪当前模式
/// </summary>
/// <param name="mode">模式</param>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectSetModeQuery(int mode)
{
	ViStatus status = AV4024_SetInstSel((ViSession)ViSess, mode);
	ViNowMode = mode;
	return status;
}
#pragma endregion

#pragma region 存储设置
/// <summary>
/// 调用数据文件
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::DataFileLoad(String ^ fileName)
{
	ViString vifn = (ViRsrc)Marshal::StringToHGlobalAnsi(fileName).ToPointer();
	ViStatus status = AV4024_LoadDateFile((ViSession)ViSess, vifn);
	Marshal::FreeHGlobal((IntPtr)vifn);
	return status;
}

/// <summary>
/// 存储数据文件
/// </summary>
/// <param name="fileName">文件名</param>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::DataFileStore(String ^ fileName)
{
	String^ fn = fileName + DateTime::Now;
	ViString vifn = (ViRsrc)Marshal::StringToHGlobalAnsi(fn).ToPointer();
	ViStatus status = AV4024_StoreDataFile((ViSession)ViSess, vifn);
	Marshal::FreeHGlobal((IntPtr)vifn);
	return status;
}
#pragma endregion

#pragma region Gps设置
/// <summary>
/// 查询GPS状态
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::GpsStatusQuery()
{
	ViInt32 gpsst;
	ViStatus status = AV4024_QueryGPSState((ViSession)ViSess, &gpsst);
	GpsStatus = gpsst;
	return status;
}

/// <summary>
/// 查询GPS开关状态
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::GpsSwitchQuery()
{
	ViBoolean gpson;
	ViStatus status = AV4024_QueryGPSOn((ViSession)ViSess, &gpson);
	GpsSwitch = gpson;
	return status;
}

/// <summary>
/// GPS数据查询
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::GpsDataQuery()
{
	ViChar gpsdata[] = "--, --, --, --\n";
	ViStatus status = AV4024_QueryGPSData((ViSession)ViSess, gpsdata);
	GpsData = gcnew String(gpsdata);
	return status;
}

/// <summary>
/// GPS接收机状态查询
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::GpsReceiveStateQuery()
{
	ViInt32 gpsre;
	ViStatus status = AV4024_QueryGPSReceiveState((ViSession)ViSess, &gpsre);
	GpsReceiveState = gpsre;
	return status;
}

/// <summary>
/// GPS重置冷启动
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::GpsRest()
{
	ViStatus status = AV4024_GPSReset((ViSession)ViSess);
	return status;
}

/// <summary>
/// GPS开关
/// </summary>
/// <param name="onoff">开关状态</param>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::GpsSet(bool onoff)
{
	ViStatus status = AV4024_SetGPSOn((ViSession)ViSess, onoff);
	return status;
}
#pragma endregion

#pragma region 频率设置
/// <summary>
/// 设置中心频率
/// </summary>
/// <param name="freq">频率值</param>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::FreqCenterSet(double freq)
{
	ViStatus status = AV4024_SetCntFreq((ViSession)ViSess, freq);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::SpanSet(double span)
{
	ViStatus status = AV4024_SetSpan((ViSession)ViSess, span);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::SpanFullSet()
{
	ViStatus status = AV4024_SetFullSpan((ViSession)ViSess);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::SpanZeroSet()
{
	ViStatus status = AV4024_SetZeroSpan((ViSession)ViSess);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::SpanLastSet()
{
	ViStatus status = AV4024_SetLastSpan((ViSession)ViSess);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::FreqStartSet(double freq)
{
	ViStatus status = AV4024_SetSttFreq((ViSession)ViSess, freq);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::FreqStopSet(double freq)
{
	ViStatus status = AV4024_SetStpFreq((ViSession)ViSess, freq);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::FreqStepSet(double freq)
{
	ViStatus status = AV4024_SetStepFreq((ViSession)ViSess, freq);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::FreqStepAutoSet(bool onoff)
{
	ViStatus status = AV4024_SetAutoStepFreqOn((ViSession)ViSess, onoff);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::SigStandardNameSet(String ^ name)
{
	ViString standardName = (ViRsrc)Marshal::StringToHGlobalAnsi(name).ToPointer();
	ViStatus status = AV4024_SetSIGStandard((ViSession)ViSess, standardName);
	Marshal::FreeHGlobal((IntPtr)standardName);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::SigChannelSet(int channel)
{
	ViStatus status = AV4024_SetChannelNum((ViSession)ViSess, channel);
	return status;
}
#pragma endregion

#pragma region 幅度设置
int SpectrumAnalyzerController::SpectAnalyCrtl::RefLevelSet(double reflevel)
{
	ViStatus status = AV4024_SetRef((ViSession)ViSess, reflevel);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::RefPosSet(int reflevel)
{
	ViStatus status = AV4024_SetRefPos((ViSession)ViSess, reflevel);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::AttSet(int att)
{
	ViStatus status = AV4024_SetAtt((ViSession)ViSess, att);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::AttAutoSet(bool onoff)
{
	ViStatus status = AV4024_SetAutoAttOn((ViSession)ViSess, onoff);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::ScalePerDivSet(double scale)
{
	ViStatus status = AV4024_SetScalePDiv((ViSession)ViSess, scale);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::PreAmpSwitchSet(bool onoff)
{
	ViStatus status = AV4024_SetPreAmpOn((ViSession)ViSess, onoff);
	return status;
}
#pragma endregion

#pragma region 带宽设置
int SpectrumAnalyzerController::SpectAnalyCrtl::RbwSet(double rbw)
{
	ViStatus status = AV4024_SetRBW((ViSession)ViSess, rbw);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::RbwAutoSet(bool onoff)
{
	ViStatus status = AV4024_SetAutoRBWOn((ViSession)ViSess, onoff);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::VbwSet(double vbw)
{
	ViStatus status = AV4024_SetVBW((ViSession)ViSess, vbw);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::VbwAutoSet(bool onoff)
{
	ViStatus status = AV4024_SetAutoVBWOn((ViSession)ViSess, onoff);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::SpanRbwSet(int spanrbw)
{
	ViStatus status = AV4024_SetSR100((ViSession)ViSess, spanrbw);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::RbwVbwSet(int rbwvbw)
{
	ViStatus status = AV4024_SetRV300((ViSession)ViSess, rbwvbw);
	return status;
}
#pragma endregion

#pragma region 平均设置
int SpectrumAnalyzerController::SpectAnalyCrtl::AvgSwitchSet(bool onoff)
{
	ViStatus status = AV4024_SetAvgOn((ViSession)ViSess, onoff);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::AvgCountSet(int count)
{
	ViStatus status = AV4024_SetAvgCount((ViSession)ViSess, count);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::AvgCountClear()
{
	ViStatus status = AV4024_ClearAvgCount((ViSession)ViSess);
	return status;
}
#pragma endregion

#pragma region 检波设置
int SpectrumAnalyzerController::SpectAnalyCrtl::DetectorTypeSet(int dt)
{
	ViStatus status = AV4024_SetDetectorType((ViSession)ViSess, dt);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::DetectorTypeAutoSet(bool onoff)
{
	ViStatus status = AV4024_SetAutoDetectorOn((ViSession)ViSess, onoff);
	return status;
}
#pragma endregion

#pragma region 扫描设置
int SpectrumAnalyzerController::SpectAnalyCrtl::SwpTimeSet(double st)
{
	ViStatus status = AV4024_SetSwpTime((ViSession)ViSess, st);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::SwpTimeAutoSet(bool onoff)
{
	ViStatus status = AV4024_SetAutoSwpTimeOn((ViSession)ViSess, onoff);
	return status;
}
#pragma endregion
