#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
	int M,N,cont=0,cont2=0;
	do{
		cont=0;
		cin>>M>>N;
		for(int i=M; i<=N; i++){
			if(i<10){
				cont+=i;
			}
			else{
				cont2=0;
				stringstream stream;
				string num;
				stream<< i;
				num= stream.str();
				for(int i=0; i<num.size(); i++){
					cont2= num[i]-48;
					cont+=cont2;
				}

			}
			
		}
		
		cout<<cont<<endl;

	}while(M!=0 && N!=0);
	return 0;
}
