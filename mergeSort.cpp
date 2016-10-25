#include "iostream"

using namespace std;

void Merge(int A[], int T[], int l, int mid, int r)
{
	int l1= l;
	int j = l;
	int leftEnd = mid;
	//int size = r - l + 1;
	int k = mid+1;
	while(l <= leftEnd && k <= r){
		if(A[l] <= A[k]){
			T[j] = A[l];
			l++;
		}
		else{
			T[j] = A[k];
			k++;
		}
		j++;
	}
	while(l <= leftEnd){
		T[j] = A[l];
		j++; l++;
	}
	while(k <= r){
		T[j] = A[k];
		j++; k++;
	}

	for(int i = l1; i <= r; i++){
		A[i] = T[i];
	}
}

void MergeSort(int A[], int T[], int l, int r)
{
	
	if(l < r){
		int mid = (l+r)/2;
		MergeSort(A, T, l, mid);
		MergeSort(A, T, mid+1, r);
		Merge(A, T, l, mid, r);
	}
}


int main()
{
	int arr[100], temp[100], n;
	cout << "enter number of elements\n";
	cin >> n;
	for(int i =0; i < n; i++)
		cin >> arr[i];
	int l=0, r = n-1;
	MergeSort(arr,temp,l,r);
	cout << "\nSorted array is:\n";
	for(int i =0; i < n; i++)
		cout << arr[i] << " ";
	cout<<'\n';
	return 0;
}