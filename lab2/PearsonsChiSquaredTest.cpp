//Pearson's chi-squared test

#include "ResultView.h"
#include <cmath>
#define delta 13
#define K 20

namespace tests
{
	H PearsonsTest(int N, double *X)
	{
		double* p = new double[K];
		int* n = new int[K];

		double h = 1.0 / K;

		for (int i = 0; i < K; i++)
		{
			n[i] = 0;
			for (int j = 0; j < N; j++)
			{
				if(X[j] >= h * i && X[j] < h * (i + 1))
				{
					n[i] ++;
				}
			}
		}

		for (int i = 0; i < K; i++)
		{
			p[i] = h;
		}

		double Chi = 0;
		for (int i = 0; i < K; i++)
		{
			Chi += pow(n[i] - N * p[i], 2) / (N * p[i]);
		}
		delete[] p;
		delete[] n;

		return Chi <= delta ? H::H0 : H::H1;
	}
}
