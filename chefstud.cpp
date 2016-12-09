#include "iostream"
#include <string.h>

using namespace std;

int main()
{

size_t t;
cin >> t;

while(t--)
{
size_t c =0;
string s;
cin >> s;
for(size_t i =0; i < s.length(); i++){
	if(s[i] == '>') s[i] = '<';
	else if(s[i] == '<') s[i] = '>';
 } //string replaced as the teacher will see

for(size_t i = 0; i < s.length(); i++){
	if(s[i] =='>' && s[i+1]=='<'){
		c++;
		i++;
	} //if
 } //end of parsing for punishment

cout << c << '\n';

} //end of while that checks a test case

return 0;
}
