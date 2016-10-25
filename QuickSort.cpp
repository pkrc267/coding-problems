#include "iostream"
#include <algorithm>
using namespace std;


int Partition(int A[], int p, int r)
{
	int x = A[r];
	int i = p-1;
	for(int j = p; j < r; j++){
		if(A[j] < x){
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i+1], A[r]);
	return i+1;
}

void QuickSort(int A[], int p, int r)
{
	int q;
	if(p < r){
		q = Partition(A, p, r);
		QuickSort(A, p, q-1);
		QuickSort(A, q+1, r);
	}
}

int main()
{
	int A[20];
	cout << "Enter number of elements\n";
	int n; cin >> n;
	for(int i =0; i < n; i++)
		cin >> A[i];
	cout << "\n";

	QuickSort(A, 0, n-1);
	
	cout << "sorted array :\n";
	for(int i = 0; i < n; i++)
		cout << A[i] << " ";
	cout <<'\n';

	return 0;
}