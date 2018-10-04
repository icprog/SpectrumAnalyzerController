#pragma once

using namespace System;

namespace SpectrumAnalyzerController {
	public ref class SpectAnalyCrtl
	{
	public:
		int ViSess;
		int ViAvaiMode;
		int ViNowMode;
		int SpectConnect(bool isUsb, String ^ip);
		int SpectCls();
		int SpectRest(); 
		int SpectAvaiModeQuery();
		int SpectNowModeQuery();
		int SpectSetModeQuery(int mode);
		int StoreDataFile(String ^fileName);
		int LoadDataFile(String ^fileName);
		int SetCenterFreq(double freq);
		int SpectClose();
	};
}
