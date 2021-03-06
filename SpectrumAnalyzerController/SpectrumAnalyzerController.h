#pragma once

using namespace System;

namespace SpectrumAnalyzerController {
	public ref class SpectAnalyCrtl
	{
	public:

#pragma region 仪器连接
		int ViSess;
		int ViOpc;
		int SpectConnect(bool isUsb, String ^ip);
		int SpectCls();
		int SpectRest();
		int SpectOpcQuery();
		int SpectClose();
#pragma endregion

#pragma region 仪器模式设置
		int ViAvaiMode;
		int ViNowMode;
		int SpectAvaiModeQuery();
		int SpectSetModeQuery(int mode);
		int SpectNowModeQuery();
#pragma endregion

#pragma region 频率设置
		int FreqCenterSet(double freq);
		int SpanSet(double span);
		int SpanFullSet();
		int SpanZeroSet();
		int SpanLastSet();
		int FreqStartSet(double freq);
		int FreqStopSet(double freq);
		int FreqStepSet(double freq);
		int FreqStepAutoSet(bool onoff);
		int SigStandardNameSet(String^ name);
		int SigChannelSet(int channel);
#pragma endregion

#pragma region 幅度设置
		int RefLevelSet(double reflevel);
		int RefPosSet(int reflevel);
		int AttSet(int att);
		int AttAutoSet(bool onoff);
		int ScalePerDivSet(double scale);
		int PreAmpSwitchSet(bool onoff);
#pragma endregion

#pragma region 带宽设置
		int RbwSet(double rbw);
		int RbwAutoSet(bool onoff);
		int VbwSet(double vbw);
		int VbwAutoSet(bool onoff);
		int SpanRbwSet(int spanrbw);
		int RbwVbwSet(int rbwvbw);
#pragma endregion

#pragma region 平均设置
		int AvgSwitchSet(bool onoff);
		int AvgCountSet(int count);
		int AvgCountClear();
#pragma endregion

#pragma region 检波设置
		int DetectorTypeSet(int dt);
		int DetectorTypeAutoSet(bool onoff);
#pragma endregion
		
#pragma region 扫描设置
		int SwpTimeSet(double st);
		int SwpTimeAutoSet(bool onoff);
#pragma endregion
		
#pragma region Gps设置
		bool GpsSwitch;
		int GpsStatus;
		int GpsReceiveState;
		String^ GpsData;
		int GpsSet(bool onoff);
		int GpsSwitchQuery();
		int GpsStatusQuery();
		int GpsReceiveStateQuery();
		int GpsDataQuery();
		int GpsRest();
#pragma endregion
		
#pragma region 存储设置
		int DataFileLoad(String ^fileName);
		int DataFileStore(String ^fileName);
#pragma endregion

	};
}
