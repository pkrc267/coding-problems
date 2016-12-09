#include "iostream"
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

bool isPalin(int n){
	int r=0, m = n;
	while(m){
		r = r*10 + m%10;
		m /= 10;
	}
	if(r == n) return true;
	else return false;
}

int main(){
	int f, l, m, count = 0;
	vector<int> p, c;
	p.push_back(0);
	c.push_back(0);
	cin >> f >> l >> m;
	for(int i = f; i <= l; ++i){
		if(isPalin(i))
			p.push_back(i);
	}

	for(int i = 1; i < p.size(); ++i)
		c.push_back(p[i] - p[i-1]);

	// for (int i = 0; i < p.size(); ++i)
	// {
	// 	cout << p[i] << " ----- " << c[i] << '\n';
	// }

	map<int, int> mymap;
	for(int i = 0; i < p.size(); ++i)
		mymap.insert(pair<int, int>(c[i],p[i]));

	// for(map<int, int>::iterator it= mymap.begin(); it!=mymap.end(); ++it)
	// 	cout<< it->first << " -> " << it->second << '\n';

	map<int, int>::iterator it= mymap.begin();
	++it;

	//cout << it->first << " ...... " << it->second;

	while( m >= 0 || it!= mymap.end()){
		if((m - it->first) >= 0)
		{   m -= it->first;
			count++;
			it++;
			//cout << " m = " << m << '\n';
		}
		else
			break;
	}

	it = mymap.begin(); ++it;
	vector<int>::iterator i = p.begin();
	i = find(p.begin(), p.end(), it->first);       //probable bug. correction: You need to find the palindrome number previous to it->first in P vector
	i--;

	cout << count << " , " << *i << " , " << it->second << '\n';

	return 0;


}