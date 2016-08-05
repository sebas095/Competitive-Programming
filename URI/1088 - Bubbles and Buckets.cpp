#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define OO  200000000
using namespace std;

long long inv;

void merge(int A[], int p, int q, int r) {
	int n1, n2, i = 0, j = 0;
	n1 = q - p + 1;
	n2 = r - q;

	int L[n1 + 2];
	int R[n2 + 2];

	for (i = 1; i <= n1; i++)
		L[i] = A[p + i - 1];

	for (j = 1; j <= n2; j++)
		R[j] = A[q + j];

	L[n1 + 1] = OO;
	R[n2 + 1] = OO;
	i = j = 1;

	for (int k = p; k <= r; k++) {
		if (L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
			inv += n1 - i + 1;
		}
	}

}

void mergeSort(int A[], int p, int r){
	int q;
	if(p < r){
		q = (p + r)/2;
		mergeSort(A, p, q);
		mergeSort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

int main() {
	fast;
	int n;
	int v[100010];
	memset(v, 0, sizeof(v));

	while (cin >> n and n) {
		for(int i = 1; i <= n; i++) cin >> v[i];
		inv = 0;
		mergeSort(v, 1, n);
		cout << ((inv & 1)? "Marcelo" : "Carlos") << endl;
	}
	return 0;
}
