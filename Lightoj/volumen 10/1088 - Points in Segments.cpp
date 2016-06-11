#include <bits/stdc++.h>

using namespace std;

//http://lightoj.com/volume_showproblem.php?problem=1088
//1088 - Points in Segments

vector<int> num;

int main(){
	/*ios_base::sync_with_stdio(0); 
	cin.tie(NULL);*/
	int t;
	scanf("%d",&t);
	for(int k=1; k<=t; k++){
		int n,q,a,b;
		scanf("%d %d",&n,&q);
		num.assign(n,0);
		for(int i=0; i<n; i++)scanf("%d",&num[i]);
		printf("Case %d:\n",k);
		for(int i=0; i<q; i++){
			scanf("%d %d",&a,&b);

			a = lower_bound(num.begin(),num.end(),a)-num.begin();
			b = upper_bound(num.begin(),num.end(),b)-num.begin();

			printf("%d\n",b-a);
		}
	}
	return 0;
}