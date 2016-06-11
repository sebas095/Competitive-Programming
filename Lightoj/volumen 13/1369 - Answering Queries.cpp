#include <bits/stdc++.h>

using namespace std;   

long long f(long long *A, int n) {                                                                       
	long long ans = 0;                                                                                                        
	for( int i = 0; i < n; i++)
		ans+= (n-1-i*2)*A[i];                                                                                             
	return ans;                                                                                                               
}       

long long A[100010];  

int main(){                                                                                                                             
	int i,j,t,k,m,n,h,x,y,q;                                                                                                                                                                                                             
	scanf("%d",&t);                                                                                                           
	for(k=1;k<=t;k++){                                                                                                                         
		scanf("%d%d",&n,&q);                                                                                                  
		printf("Case %d:\n",k);  

		for(i=0;i<n;i++)                                                                                                      
		   scanf("%lld",&A[i]);  

		long long sum=f(A,n),v;  

		while(q--){                                                                                                                                                                                                               
			scanf("%d",&h);                                                                                                   
			if(h==1)printf("%lld\n",sum);   

			else if(h==0){                                                                                                                                                                                                   
				scanf("%d%lld",&x,&v);                                                                                        
				long long tmp = n-1-x*2;                                                                                         
				sum += tmp*(v-A[x]);  
				A[x]=v;                                                                                             
			}                                                                                                                 
		}                                                                                                                     
	}                                                                                                                         
	return 0;                                                                                                                 
}  