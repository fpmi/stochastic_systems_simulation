namespace tests
{
	enum H
	{
		H0,
		H1
	};

	struct TestResult
	{
		H m;
		H D;
	};

	TestResult MomentsCoincidenceTest(int n, double *X);
	H PearsonsTest(int n, double *X);
}

namespace generators
{
	bool fequal(double a, double b);
	double fRand(double fMin, double fMax);
	double* LinearCongruentialGeneration(int n);
	double* VanWijngaardenGeneration(int n);
}