#include "ResultView.h"
#include <iostream>
#include <ctime>

namespace generators
{
	double* LinearCongruentialGeneration(int n)
	{
		double ai;
		double a0;
		double M = 68719476735;
		double c = 25214903917;
		srand(time(NULL));
		a0 = fRand(0, 1);
		double *arr = new double [n];
		for(int i = 0; i < n; i++)
		{
			ai = fmod((c * a0), M);
			a0 = ai;
			ai = ai / M;
			arr[i] = ai;
		}
		return arr;
	}
}