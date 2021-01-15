#include "iostream"
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main(){
	size_t t; cin >> t;
	while(t--){
		vector<int> v;
		string s;
		cin >> s;
		int p =0;
		for(int i = 0; i < s.length(); i++){
			int c = s[i] - 'a';
			int d = c - p;
			
			if(d > 0){
				if(d > 13){
					v.push_back(13 - (d%13));
					continue;
				}
				if(d < 13){
					v.push_back(d);
					continue;
				}
			}
			else{
				if(-d == 13){
					v.push_back(13);
				}
				if(-d < 13){
					v.push_back(d%13);
					continue;
				}
				if(-d > 13){
					v.push_back(-(13 + (d%13)));
					continue;
				}
			}
			p=c;

		}
		for ( vector<int>::iterator it= v.begin(); it < v.end(); ++it)
		{
			cout << *it << " ";
		}
		cout << '\n';
	}
	return 0;
}