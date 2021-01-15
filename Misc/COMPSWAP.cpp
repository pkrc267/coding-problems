#include "iostream"

using namespace std;

int main()
{
	int t; cin >>  t;
	while(t--){
		int n; cin >> n;
		int a[10000];
		for(int i = 0; i< n; i++){
			cin >> a[i];
		}
		int c=0, s=0;
		int j;
		for(int i = 1; i <= n; i++){
			 j = i-1;
			while(j > 0){
				if(a[j-1] > a[j]){
					s++; c++;
					swap(a[j-1], a[j]);
					j--;
				}
				else{
					c++;
					break;
				}
			}
		}

		cout << c-s << '\n';
		c =0; s = 0;

	}
	return 0;
}