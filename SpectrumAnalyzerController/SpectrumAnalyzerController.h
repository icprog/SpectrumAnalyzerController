#pragma once

using namespace System;

namespace SpectrumAnalyzerController {
	public ref class SpectAnalyCrtl
	{
	public:
		int SpectConnect(bool isUsb, String ^ip);
		int SetCenterFreq(double freq);
		int SpectClose();
		int ViSess;
	};
}
