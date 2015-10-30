#include <bits/stdc++.h>

using namespace std;

int main()
{
 int N,i;
 
 while(scanf("%d",&N)!=EOF)
      {
       if ( N == 1 ) { printf("0\n"); continue; }
   
       if ( (N + 1) % 3 == 0 ) i = (((N + 1)/3)<<1)-1;
       else {
             if( N % 3 == 0 ) i = (N/3)<<1;
             else i = ((N - 1)/3)<<1;
            }
      printf("%d\n",i);        
     }      
      
 return 0;
}