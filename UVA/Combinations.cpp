#include <bits/stdc++.h>

using namespace std;

long double factorial (long double n){
    long double r = 1;
    for (long double i = 2; i <= n; i++)r *= i;

    return r;
}
int main (){
    long double m, n;
    while (cin>>m>>n && (m!=0&&n!=0)){
        long double r = (factorial(m))/(factorial(m-n)*factorial(n));
        cout<<m<<" things taken " <<n<< " at a time is " <<fixed<< setprecision(0) << r << " exactly." << endl;
    }
    return 0;
}