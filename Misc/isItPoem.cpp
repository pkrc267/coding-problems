#include <bit/stdc++.h>

using namespace std;

bool checkRhyme(std::vector<string> t, int i, int j){
	string a, b; int t= 0;
	a = t[i];	int indexA = a.length() - 4;
	b = t[j];	int indexB = b.length() - 4;

	while(t < 4){
		if(a[indexA] != b[indexB])
			return false;
		else{
			t++;
			indexA++;
			indexB++;
		}
	}
	return true;
}



bool isItPoem(std::vector<int> rhyme, std::vector<std::string> text) {
	bool flag = false;

	for(int i=0; i < rhyme.length(); i++){
		for (int j = i+1; j < rhyme.length(); j++)
		{
			if(rhyme[i] == rhyme[j]){
				flag = checkRhyme(text, i, j);
			}
		}
	}
	return flag;

}


int main()
{
	return 0;
}