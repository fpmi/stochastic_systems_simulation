#include "ResultView.h"
#include <iostream>
#include <ctime>

namespace generators
{
	double* VanWijngaardenGeneration(int n)
	{
		int r = 2;
		int *beta;
		beta = new int[r];
		beta[0] = 13;

		beta[1] = 37;
		double ai = 0;
		double a0;
		srand(time(NULL));
		a0 = fRand(0, 1);
		unsigned long long M = 68719476735;
		double *arr = new double [n];
		for(int i = 0; i < n; i++)
		{
			for(int i = 0; i < r; i++)
			{
				ai += beta[i] * a0; 
			}
			ai = fmod(ai, M);
			a0 = ai;
			ai = ai/M;
			arr[i] = ai;
		}
		return arr;
	}
}