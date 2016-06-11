#include <stdio.h>
#include <stdlib.h>



int primos(int num){
	int i,j,aux=0,temp=0,num2=0;
	bool prime;
	if(num>13){
		num2=((num*num)+num+41)/13;
	}
	else{
		num2=41;
	}
	for(i=2; i<=num2; i++){
		prime=true;
		for(j=2; j<i; j++){
			if(i%j==0){
				prime=false;
				break;
			}
		}
		if (prime){
			temp=i;
			aux++;
		}
		if(num==aux){
			return temp;
		}
	}

}

int main(){
	int t,num,res=0;
	scanf("%d",&t);
	for(int i=1; i<=t; i++){
		res=0;
		scanf("%d",&num);
		res=primos(num);
		printf("%d\n",res);
	}
	return 0;
}