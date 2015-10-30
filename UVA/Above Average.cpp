#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	cin>>cases;
	while(cases--){
		int N;
		cin>>N;
		double students[N],average=0.0,count=0.0,ans=0.0;
		for(int i=0; i<N; i++)cin>>students[i];
		for(int i=0; i<N; i++){
			average+=students[i];
		}
		average = average/N;
		for(int i=0; i<N; i++){
			if(students[i]>average)count+=1;
		}
		ans = count/(double)N *100.000;
		printf("%.3lf%%\n",ans);
	}
	return 0;
}