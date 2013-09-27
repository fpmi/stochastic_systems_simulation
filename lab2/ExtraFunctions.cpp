#include "ResultView.h"
#include <iostream>

namespace generators
{
	bool fequal(double a, double b)
	{

		if(a - b < 0) return true;
		return false;
	}

	double fRand(double fMin, double fMax)
	{
		double f = (double)rand() / RAND_MAX;
		return fMin + f * (fMax - fMin);
	}
}