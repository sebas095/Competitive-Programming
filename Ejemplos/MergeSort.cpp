#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void Merge(vector <int> &a, vector <int> &b, vector <int> &c){
	int indexa = 0, indexb = 0, indexc = 0;

	while(indexa < a.size() && indexb < b.size()){
		if(a[indexa] < b[indexb]){
			c[indexc] = a[indexa];
			indexa++;
		}
		else{
			c[indexc] = b[indexb];
			indexb++;
		}
		indexc++;
	}

	while(indexa < a.size()){
		c[indexc] = a[indexa];
		indexa++;
		indexc++;
	}

	while(indexb < b.size()){
		c[indexc] = b[indexb];
		indexb++;
		indexc++;
	}
}

vector <int> MergeSort(vector <int> &array){
	if(array.size() <= 1)
		return array;

	int n1,n2,i;
	n1 = array.size()/2;
	n2 = array.size()-n1;
	vector <int> mid1(n1), mid2(n2);

	for(i=0; i<n1; i++){
		mid1[i] = array[i];
	}

	for(int j=0,i=n1; j<n2; j++,i++){
		mid2[j] = array[i];
	}

	MergeSort(mid1);
	MergeSort(mid2);
	Merge(mid1,mid2,array);

	return array;
}

int main(){
	int n;
	cin>>n;
	vector <int> array (n);
	for(int i=0; i<n; i++)cin>>array[i];
	cout<<"Vector antes de ordenar: "<<endl;
	for(int i=0; i<n; i++)cout<<array[i]<<" ";
	array = MergeSort(array);
	cout<<endl<<"Vector ordenado: "<<endl;
	for(int i=0; i<n; i++)cout<<array[i]<<" ";
	return 0;
}