#include "iostream"
#include <string>
#include <stdlib.h>
#include <math.h>
typedef unsigned long long ull;

using namespace std;

bool isPrime(ull n){
	for(ull i = sqrt(n); i > 1 ; --i){
		if(n % i == 0)
			return false;
	}
	return true;
}

ull reverse(ull m)
{
	ull r = 0;
	while(m!=0){
		r = r*10 + (m%10);
		m /= 10;
	}
	return r;
}

int main()
{
	ull t; cin >> t;
	while(t--){
		ull sum = 0;
		string num;
		cin >> num;
		
		for(ull i =0; i < num.length(); i++){
			ull t = 0, r = 0;
			for(ull j = i; j < num.length(); j++){
				ull x;
				x = num[j] - '0';
				t = t*10 + x;
				//t = stol(num.substr(i, j+1));
				cout << "test value t : " << t << '\n' ;
				if(t == 1 || t == 0)
					continue;
				r = reverse(t);
				if(isPrime(t) && isPrime(r))
					{ 
						cout << "adding" << t << '\n';
						sum+= t;
					}
			}
		}
		if(sum == 0) cout << "Final sum = " << -1 << '\n';
		else 		 cout << "Final sum = " << sum << '\n';
	}
	return 0;
}