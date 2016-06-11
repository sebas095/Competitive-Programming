#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

double areaPoligono(const vector< pair<long long int,long long int> > &points){
	double area = 0.0;
	int n = points.size();
	
	for(int i=1; i<n; i++)
		area += (points[i-1].first*points[i].second ) - (points[i].first*points[i-1].second);
	
	area += (points[n-1].first*points[0].second ) - (points[0].first*points[n-1].second);
	area /= 2;
	
	return area;
}

long long int numeroPuntos(const vector< pair<long long int,long long int> > &points){
	long long int b = points.size();
	int n = points.size();
    
    for(int i=1; i <= n; i++){
    	if(points[i % n].first == points[i-1].first){
    		b += fabs(points[i % n].second - points[i-1].second) - 1LL;
    	}
      	else if(points[i % n].second == points[i-1].second){
      		b += fabs(points[i%n].first - points[i-1].first) - 1LL;
      	}
      	else{      
        	long long int dx = fabs(points[i % n].first - points[i-1].first);
        	long long int dy = fabs(points[i % n].second - points[i-1].second);
        	b += __gcd(dx,dy) - 1LL;
      	}
    }

    return b;
}

// Teorema de pick
// A = I + B/2 - 1
// A : area del poligono
// I : numero de puntos enteros dentro del poligono
// B : Numero de puntos enteros en el borde del poligono

int main(){
	fast;
	int t,n;
	cin>>t;
	for(int k=1; k <= t; k++){
		cin>>n;
		long long int B,I,A;
		vector< pair<long long int,long long int> >points(n);
		for(int i=0; i<n; i++)cin>>points[i].first>>points[i].second;
		B = numeroPuntos(points)/2LL;
		A = ((long long int) fabs(areaPoligono(points)));
		I = A - B + 1;
		cout<<"Case "<<k<<": "<<I<<endl;
	}
	return 0;
}