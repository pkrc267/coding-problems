#include "iostream"

using namespace std;

void CountingSort(int a[], int b[], int k, int lenA)
{
	cout << "\n inside CountingSort\n";
	
	int c[100];
	
	for(int i =0; i <= k; i++)
		c[i] = 0;
	
	cout << "\n after c[]=0\n";
	
	for(int j = 0; j < lenA; j++)
		c[a[j]]++;
	
	cout << "\n after c[]++\n";
	
	for(int i = 1; i <=k; i++)
		c[i] = c[i] + c[i-1];
	
	cout << "\n after c[] operation\n";
	
	for(int j = lenA-1; j>=0; j--){
		b[c[a[j]]-1] = a[j];
		c[a[j]]--;
	}
	cout << "\n after b[] processing\n";
}

int main()
{
	int n, max, A[50], B[50];
	cout << "enter number of elements\n";
	cin >> n;
	cout << "\nenter the elements\n";
	for(int i =0; i < n; i++)
		cin >> A[i];
	cout << "\nenter max element\n";
	cin >> max;
	CountingSort(A,B,max, n);

	cout << "Sorted Array is:\n";
	for(int i =0;  i<n; i++)
		cout << B[i] << ' ';
	cout << '\n';

	return 0;
}