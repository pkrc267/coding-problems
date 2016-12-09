#include "iostream"
#include <string>
using namespace std;

int main()
{
	size_t t; cin >> t;

	while(t--){
		string s;	cin >> s;
		int f = 0;
		int i = 0, j = s.length()-1;
		if(s.length()%2 != 0){
			if(s[s.length()/2] == '.')
				s[s.length()/2] = 'a';
		}
		while(i <= j){
			if(s[i] == s[j])
			{
				if(i == j && s[i] == '.')
					s[i] = 'a';
				if(i == j && s[i]=='.' && s[j] == '.')
					s[i] = s[j] = 'a';
				
				i++; j--;
			}
			else{
				if(s[i] == '.' || s[j] == '.'){
					if(s[i] == '.' && s[j] != '.')
						s[i] = s[j];
					else if(s[j] == '.' && s[i] != '.')
						s[j] = s[i];
						else if(s[i] == '.' && s[j] == '.')
							s[i] = s[j] = 'a';

					++i;
					--j;
				}
				else
				{
					f = -1;
					break;
				}
			}
		}
		if(f == -1) cout << -1 << '\n';
		else cout << s <<'\n';
	}
	return 0;
}