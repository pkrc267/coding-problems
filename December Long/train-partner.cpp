#include "iostream"

using namespace std;

void findingSister(int m)
{
	string pos[8]={"LB","MB","UB","LB","MB","UB","SL","SU"};
	int sis[9] = {7,4,5,6,1,2,3,8,7};
	int d = m%8;
	int s = (8*(m/8)) + sis[d];
	if(d == 0)
		s = (8*((m-1)/8)) + sis[d];
	cout << s << pos[sis[d] -1] << '\n';
}


int main()
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		findingSister(n);
	}
}