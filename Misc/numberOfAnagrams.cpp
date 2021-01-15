#include "iostream"
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int numberOfAnagrams(std::string S) {
    
    vector<int> count(26, 0);
    for(int i =0; i< S.length(); i++){
        ++count[S[i]-97];
    }
    unsigned long f = tgamma(S.length() + 2);
    
    cout << f << '\n' ;

    for(int i = 0; i < count.size(); i++){
        f/= tgamma(count[i] + 1);
        cout << f <<'\n';
    }
    return f;

}

int main(){
	string s;
	cin >> s;
	cout << numberOfAnagrams(s) << '\n';
	return 0;
}
