#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
	int n,ans1,ans2;
	cin>>n;
	int mi1,ma1,mi2,ma2,mi3,ma3;
	cin>>mi1>>ma1>>mi2>>ma2>>mi3>>ma3;
	ans1 = min(ma1,n-mi2-mi3);
	n-= ans1;
	ans2 = min(ma2,n-mi3);
	n -= ans2;

	cout<<ans1<<" "<<ans2<<" "<<n<<endl;
	return 0;
}