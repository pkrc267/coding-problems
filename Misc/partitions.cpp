#include "iostream"
#include <cmath>

using namespace std;

int main()
{
	cout << "enter number to find number of partitions:\n";
	double n; cin >> n;
	double p = sqrt(2*n/3);
	cout << exp(M_PI*p)/(4*n*sqrt(3)) << '\n' ; // Ramanujan-Hardy Formula that gives approximately closee value for larger numbers of n. But not correct.
	return 0;
}