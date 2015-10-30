#include <bits/stdc++.h>

using namespace std;
 
#define MAXNODES 1000

int toInt(string &x){
	stringstream s;
	s<<x;
	int r;
	s>>r;
	return r;
}

string toStr(int &x){
	stringstream s;
	s<<x;
	return s.str();
}

int main(){
	int i = 1, j, divi, suma = 0;
	std::vector<int> v;
    while( i <= 400){
       divi = 0;
       for(j = 1; j <= i; j++){
             if(i % j == 0)
             divi++;
       }
       if(divi == 2){
            v.push_back(i);
       }
       i++;
    }
    int casos, num,total;
    cin>>casos;
    for (int i = 0; i < casos; ++i){
    	cin>>num;
    	total=0;
    	int j=0;
		while(v[j] < num){
			for (int k = 0; k <= j; ++k){
				if(v[k]+v[j] == num){
					total++;
				}
			}
			j++;
    	}
    	cout<<total<<endl;
    }

    return 0;
}