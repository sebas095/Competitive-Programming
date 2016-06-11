#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, num, total, s, e, pos;
	bool flag;
	
	while(cin>>n){
		
		
		if(n==0){
			break;
		}
		else{
			total=0;
			s=0;
			flag=false;
			vector<int> vec(n);
			
			for(int i=0; i<n; i++){
				cin>>num;
				total+=num;
				vec[i]=num;
			}
			
		    e=total;
		    
			for(int i=0; i<n; i++){
				s+=vec[i];
				e-=vec[i];
				
				if(s==e){
					pos=i+1;
					flag=true;
					i=n;
				}
			}
			
			if(flag==true){
				cout<<"Sam stops at position "<<pos<<" and Ella stops at position "<<pos+1<<"."<<endl;
			}
			else{
				cout<<"No equal partitioning."<<endl;
			}
		}
	}
	
	return 0;
}
