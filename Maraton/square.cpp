#include <iostream>

using namespace std;

int main(){
	int L,N,P=0;
	while(true){
		P=0;
		cin>>L>>N;
		if(N==0){
			P=0;
		}
		if(L==N || (L%2)==0){
			P=4*L;
		}
		else{
			P=(L*L)+(N-1);
		}
		cout<<P<<endl;
		if(L==0 && N==0)break;

	}
	return 0;
}