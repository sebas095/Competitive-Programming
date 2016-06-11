#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
	int n;
	double w;
	int chicas = 2000000000;
    int chicos = 2000000000;
	cin>>n>>w;
	vector<int> people(2*n);

	for(int i=0; i<2*n; i++)cin>>people[i];

	sort(people.begin(),people.end());

    for(int i = 0 ; i < n; i++) {
        chicas = min(chicas, people[i]);
        chicos = min(chicos, people[i+n]);
    }

    double maxc = w/(n*3);
    if(maxc > chicas) maxc = (double)chicas;
    if(2*maxc > chicos) maxc = (double)chicos/2;

    printf("%.10f", 3.0*maxc*n);
}

