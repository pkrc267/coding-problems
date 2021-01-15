#include "iostream"
#include <string.h>
#include <algorithm>
#include <math.h>

using namespace std;

bool isPrime(int n){
	for(int i = sqrt(n); i > 2; --i){
		if(n%i == 0)
			return false;
	}
	return true;
}


int emirpMinion(auto num) {

	string s = to_string(num);
	long sum = 0;
	for(int i = 0; i < s.length(); i++){
		for(int j = i; j < s.length(); j++){
			string s2 = s.substr(i, j+1);
			cout << "checking : " << s2 << '\n';
			auto a = stol(s2);
			//cout << "a = " << a << '\n';
			reverse(s2.begin(), s2.end());
			auto b = stol(s2);
			//cout << "b = " << b << '\n';
			if( a!= 1 && b!= 1 )
			{
				if(isPrime(a) && isPrime(b))
							{cout << "adding : " << a << '\n'; sum += a;}
			}
		}
	}
	return (sum > 0 ? sum : -1);
}



int main(){
	size_t t;
	cin >> t;
	while(t--){
		long num;
		cin >> num;
		cout << emirpMinion(num) << '\n' ;
	}
}