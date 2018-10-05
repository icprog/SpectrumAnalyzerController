#pragma once

using namespace System;

namespace SpectrumAnalyzerController {
	public ref class SpectAnalyCrtl
	{
	public:
		bool GpsSwitch;
		int CenterFreqSet(double freq);
		int DataFileLoad(String ^fileName);
		int DataFileStore(String ^fileName);
		int GpsDataQuery();
		int GpsReceiveState;
		int GpsReceiveStateQuery();
		int GpsRest();
		int GpsSet(bool onoff);
		int GpsStatus;
		int GpsStatusQuery();
		int GpsSwitchQuery();
		int SpectAvaiModeQuery();
		int SpectClose();
		int SpectCls();
		int SpectConnect(bool isUsb, String ^ip);
		int SpectNowModeQuery();
		int SpectRest();
		int SpectSetModeQuery(int mode);
		int ViAvaiMode;
		int ViNowMode;
		int ViSess;
		String^ GpsData;
	};
}
