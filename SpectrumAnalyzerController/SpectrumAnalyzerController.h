#pragma once

using namespace System;

namespace SpectrumAnalyzerController {
	public ref class SpectAnalyCrtl
	{
	public:
		int ViSess;
		int SpectConnect(bool isUsb, String ^ip);
		int SpectCls();
		int SpectRest();
		int SpectClose();

		int ViAvaiMode;
		int ViNowMode;
		int SpectAvaiModeQuery();
		int SpectSetModeQuery(int mode);
		int SpectNowModeQuery();

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
		int RefLevelSet(double reflevel);
		int RefPosSet(double reflevel);
		int AttSet(int att);
		int AttAutoSet(bool onoff);
		int ScalePerDivSet(double scale);
		int PreAmpSwitchSet(bool onoff);
		int RbwSet(double rbw);
		int RbwAutoSet(bool onoff);
		int RbwSet(double rbw);
		int VbwAutoSet(bool onoff);
		int SpanRbwSet(int spanrbw);
		int RbwVbwSet(int rbwvbw);
		int AvgSwitchSet(bool onoff);
		int AvgCountSet(int count);
		int AvgCountClear();
		int DetectorTypeSet(int dt);
		int DetectorTypeAutoSet(bool onoff);
		
		int SwpTimeSet(double st);
		int SwpTimeAutoSet(bool onoff);

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

		int DataFileLoad(String ^fileName);
		int DataFileStore(String ^fileName);
	};
}
