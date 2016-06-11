
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double totA, totB, sumA, sumB;
    cin >> n;
    totA = totB = sumA = sumB = 0.0;
    while (n--) {
        int ti, xt, yt;
        cin >> ti >> xt >> yt;
        if (ti == 1) {
            totA++;
            sumA += xt;
        }
        else {
            totB++;
            sumB += xt;
        }
    }
    if (sumA / totA >= 5.0) cout<<"LIVE"<<endl;
    else cout<<"DEAD"<<endl;
    if (sumB / totB >= 5.0) cout<<"LIVE"<<endl;
    else cout<<"DEAD"<<endl;
	return 0;
}