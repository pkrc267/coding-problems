#include "iostream"

using namespace std;

int main()
{
	int n, sum=0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i) // improve input process;
		cin >> a[i];
	for(int j = n-1; j >= 0; j--)
	{
		for (int i = 0; i < j ; ++i)
		{
			sum += (a[i] & a[j]);
		}
	}

	cout << sum << '\n';

	return 0;
}