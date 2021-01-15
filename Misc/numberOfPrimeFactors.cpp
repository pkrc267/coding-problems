#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	unsigned long n;
	int c=0;
	cin >> n;

	if(n%2 == 0) {c++; cout << 2 <<'\n';}
	while(n%2 == 0){
		n/=2; 
	}

	for(int i =3; i <= sqrt(n); ++i){
		if(n%i == 0) {c++; cout << i << '\n';}
		while(n%i == 0){
			n/=i;
		}
	}

	cout << n << '\n';
	return 0;
}