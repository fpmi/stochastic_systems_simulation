#include "ResultView.h"
#include <iostream>
using namespace std;


void main()
{
	int n = 0;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"TEST 1"<<endl;
	double* X1 = generators::LinearCongruentialGeneration(n);
	tests::TestResult result1 = tests::MomentsCoincidenceTest(n, X1);
	cout<<"M : "<<result1.m<<";\r\nD: "<<result1.D<<endl;
	cout<<"CHI: "<<tests::PearsonsTest(n, X1)<<endl;
	delete[] X1;

	cout<<"TEST 2"<<endl;
	double* X2 = generators::VanWijngaardenGeneration(n);
	tests::TestResult result2 = tests::MomentsCoincidenceTest(n, X2);
	cout<<"M : "<<result2.m<<";\r\nD: "<<result2.D<<endl;
	cout<<"CHI: "<<tests::PearsonsTest(n, X2)<<endl;
	delete[] X2;
}