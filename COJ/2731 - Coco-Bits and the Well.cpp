#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <iostream>
using namespace std;
 
int main(){
  int t;
  double PI=2*acos(0.0);
  double r;
  double area;
  cin>>t;
 
  for(int i=1;i<=t;i++){
    cin>>r;
    area=(pow((r*2),2))-(pow(r,2)*PI);
    area = area/4;
    printf("%.2f\n",area);
  }
 
  return 0;  
}