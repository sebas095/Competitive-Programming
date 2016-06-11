#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int n;
	int xt,yt,xi,yi,r;
	double d;
	vector<double> distances(1004), distances2(1004);
	while(cin>>n && n){
		cin>>xt>>yt;
		for(int i=0; i<n; i++){
			cin>>xi>>yi>>r;
			d = sqrt((xt - xi)*(xt - xi) + (yt - yi)*(yt - yi)) - r;
			distances[i] = d;
		}
		distances2 = distances;
		sort(distances.begin(), distances.begin()+n);
		d = distances[0]; //distancia minima
		int index = 0;

		for(int i=0; i<n; i++){ //buscamos el indice en donde se encuetra la distancia minima
			if(d == distances2[i]){
				index = i;
				break;
			}
		}

		cout<<index+1<<endl;

	}
	return 0;
}