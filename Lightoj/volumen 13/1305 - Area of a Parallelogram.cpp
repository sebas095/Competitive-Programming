#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,area;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d %d %d %d %d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
        Dx=Ax+Cx-Bx;
        Dy=Ay+Cy-By;
        area=abs(((Bx-Ax)*(Cy-By))-((By-Ay)*(Cx-Bx)));
        printf("Case %d: %d %d %d\n",i,Dx,Dy,area);
    }
   
    return 0;
}