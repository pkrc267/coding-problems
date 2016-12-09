#include "iostream"

using namespace std;

int main()
{
	size_t t;
	cin >> t;
	while(t--){
		string s;	cin >> s;
		int c[2];
		c[0] = c[1] = 0;
		for(auto i : s ){
			++c[i - '0'];
		}
		if(c[0] == 1 || c[1] == 1)
			cout <<"Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}