#include <bits/stdc++.h>

using namespace std;
 
int main(){
   while(true){
       int cases;
       cin>>cases;
       if(cases==0)break;
       int a,b,base=1,exponent=1;
       double e,e2;
       for(int i=0; i<cases; i++){
           cin>>a>>b;
           e=b*log10((double)a);
           e2=exponent*log10((double)base);
           if(e > e2){
               base=a;
               exponent=b;
            }
        }
        cout<<base<<" "<<exponent<<endl; 
   }
  
	return 0;
}