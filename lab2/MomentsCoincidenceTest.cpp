#include "ResultView.h"
#include <cmath>
#define delta 2.58


namespace tests
{
	TestResult MomentsCoincidenceTest(int n, double *X)
	{
		double exp_M = 0.5;
		double exp_D = 1.0/12;
		double sum = 0;
		for(int i = 0; i < n; i++)
		{
			sum += X[i];
		}
		double M = sum / n;
		sum = 0;
		for(int i = 0; i < n; i++)
		{
			sum += (X[i] - M)*(X[i] - M);
		}
		double D = sum / (n - 1) - exp_D;
		M -= exp_M;

		TestResult result;
		double val1 = std::sqrt(12 * n) * std::abs(M);
		result.m = val1 < delta ? H::H0 : H::H1;

		double val2 = (n - 1) * abs(D) / (n * sqrt(0.0056 / n + 0.0028 * pow((double) n, -2) - 0.0083*pow((double) n , -3)));
		result.D = val2 < delta ? H::H0 : H::H1;

		return result;
	}
}