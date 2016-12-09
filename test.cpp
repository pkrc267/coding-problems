#include "iostream"
#include <algorithm>

using namespace std;

int main(){
	int m[3][3], a[3][3];
	for(int i =0; i < 3; i++)
		for(int j =0; j < 3; j++)
			cin >> m[i][j];

	cout << "\n---------------\n";

	int rv = 2, c1=0, r2=0, cv=0;

	while(r2 < 3 && c1 < 3){
		if(rv > 0 && cv < 3){
			a[rv--][c1] = m[r2][cv--];
		}
		else{
			rv = 2, cv = 0, r2++, c1++;
		}
	}

	for(int i =0; i < 3; i++)
		{
			for(int j =0; j < 3; j++)
				cout << a[i][j] << ' ';
			cout << '\n';
		}

	return 0;
}