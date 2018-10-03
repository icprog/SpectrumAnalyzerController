#pragma once

using namespace System;

namespace SpectrumAnalyzerController {
	public ref class SpectAnalyCrtl
	{
	public:
		int ViAvaiMode;
		int SpectConnect(bool isUsb, String ^ip);
		int SpectAvaiModeQuery();
		int SetCenterFreq(double freq);
		int SpectClose();
		int ViSess;
	};
}
