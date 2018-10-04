#include "stdafx.h"
#include "AV4024.h"
#include "SpectrumAnalyzerController.h"

using namespace System::Runtime::InteropServices;

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
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectSetModeQuery(int mode)
{
	ViStatus status = AV4024_SetInstSel((ViSession)ViSess, mode);
	ViNowMode = mode;
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::StoreDataFile(String ^ fileName)
{
	String^ fn = fileName + DateTime::Now;
	ViString vifn = (ViRsrc)Marshal::StringToHGlobalAnsi(fn).ToPointer();
	ViStatus status = AV4024_StoreDataFile((ViSession)ViSess, vifn);
	Marshal::FreeHGlobal((IntPtr)vifn);
	return status;
}

int SpectrumAnalyzerController::SpectAnalyCrtl::LoadDataFile(String ^ fileName)
{
	ViString vifn = (ViRsrc)Marshal::StringToHGlobalAnsi(fileName).ToPointer();
	ViStatus status = AV4024_LoadDateFile((ViSession)ViSess, vifn);
	Marshal::FreeHGlobal((IntPtr)vifn);
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
/// 设置中心频率
/// </summary>
/// <param name="freq">频率值</param>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SetCenterFreq(double freq)
{
	ViStatus status = AV4024_SetCntFreq((ViSession)ViSess, freq);
	return status;
}

/// <summary>
/// <summary>
/// 关闭频谱仪
/// </summary>
/// <returns></returns>
int SpectrumAnalyzerController::SpectAnalyCrtl::SpectClose()
{
	ViStatus status = AV4024_close((ViSession)ViSess);
	return status;
}