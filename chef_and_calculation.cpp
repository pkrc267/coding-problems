#include <iostream>
#include <queue>
using namespace std;

int c[100] = {0};
int type[100][6] = {0};
int score[100] = {0};
size_t i = 0;

void heap_sort(int *arr, int n )
{
	int m = n;
	priority_queue <int> q;
	int x = 0;
	while(n-- > 0)
	{
		q.push(arr[x++]);
	}
	x=0;
	while(!q.empty())
	{
		arr[x++] = q.top();
		q.pop();
	}

	int count = 1;

	for(int j = 1; j < m; j++){
		if(arr[j] != arr[j-1])
			count++;
	}
	
		if(count < 4 ) score[i] = m;
		if(count == 4) score[i] = m + 1;
		if(count == 5) score[i] = m + 2;
		if(count == 6) score[i] = m + 4;

		cout << "score is : " << score[i] << '\n';
}

int winner(int n){
	int max, chef, flag=0, pos=0;
	max = score[0];
	for(int x = 1; x < n; x++){
		
		if( (max == score[x]) && (score[x] == score[0]) )
			flag++;
		
		if(max < score[x]){
			max = score[x];
			pos = x;		
		}

	}
	if(flag == (n-1)) return -1;
	else return pos;
}

int main(){
	size_t t; cin >> t;

	while(t--){
		int n; cin >> n;
		int m = n;
		c[100] = {0};
		type[100][7] = {0};
		score[100] = {0};
		while(n--){
			cin >> c[i];
			
			for(int j =0; j < c[i]; j++)
				cin >> type[i][j];

			heap_sort(type[i], c[i]);
			i++;
		}

		int w = winner(m);

		 if(w == -1) cout << "tie\n";
		 else if(w == 0 ) cout << "chef\n";
		 	  else cout << w+1 << '\n';
	}
	return 0;
}