#include "iostream"
#include <string>

using namespace std;

int main(){
	string n;
	cin >> n;
	int count=0;
	for(long i = stol(n); i > 0; i--)
		for(long j = stol(n) - 1; j > 0; j--)
			if(((i*i)-(j*j)) == stol(n))
				{   cout << i << " , " << j <<'\n';
					count++;
				}
	return 0;
}