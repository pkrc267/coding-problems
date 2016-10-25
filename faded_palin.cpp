#include "iostream"
#include <string>

using namespace std;

int main()
{
	size_t t; cin >> t;
	while(t--){
		string s;	cin >> s;
		size_t flag = 0;
		unsigned long l = s.length() -1;
		for(int i = 0; i <= (l+1)/2 ; i++){
			if((s[i] == '.') && (s[l-i] == '.')){
				s[i] = s[l-i] = 'a';
			}
			if((i == l-i)  &&  (s[i] == s[l - i]) && s[i]=='.'){
					s[i] = 'a';
					continue;
			}
			if((s[i] == s[l-i]) && (s[i] == '.')){
				s[i] == s[l-i] == 'a';
				continue;
			}
			if(s[i] == '.' && s[l-i] == '.'){
				s[i] = s[l-i] = 'a';
				continue;
			}
			if(s[i] == '.' && s[l-i] != '.'){
				s[i] = s[l-i];
				continue;
			}
			if(s[i] != '.' && s[l-i] == '.'){
				s[l-i] = s[i];
				continue;
			}
			if(s[i]!= s[l-i]){
				flag = -1;
				break;
			}
		}
		(flag == -1)? cout << -1 <<'\n' : cout << s << '\n';
	}
	return 0;
}