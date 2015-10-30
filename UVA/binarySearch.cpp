#include <bits/stdc++.h>

using namespace std;

int N;

//Iterative
int binarySearchIt(int A[], int value){
	int low = 0;
	int high = N-1;
	while(low <= high){
		int mid = (low + high)/2;
		if(A[mid] > value)
			high = mid - 1;
		else if(A[mid] < value)
			low = mid + 1;
		else
			return mid;
	}
	return low;
}

//Recursive
int binarySearchRe(int A[],int value, int low, int high){
	if(low > high)
		return low;
	int mid = (low + high)/2;
	if(A[mid] > value)
		return binarySearchRe(A,value,low,mid-1);
	else if(A[mid] < value)
		return binarySearchRe(A,value,mid+1,high);
	else
		return mid;
}

int main(){
	int A[] = {1,2,6,9,14,55,88};
	N = 7;
	cout<<binarySearchIt(A,3)<<endl;
	cout<<binarySearchRe(A,14,0,N-1)<<endl;
	return 0;
}