#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	fast;
	string s[4];
    int c[4];

    for (int i = 0; i < 4; i++) {
        cin>>s[i];
        c[i] = s[i].size() - 2;
    }

    sort(c, c + 4);

    bool hasMax = (c[3] >= c[2] * 2);
    bool hasMin = (c[0] <= c[1] / 2);

    if (hasMax == hasMin) {
        cout << "C" << endl;
        return 0;
    } 
    
    else if (hasMin) {
        for (int i = 0; i < 4; i++) {
            if (c[0] + 2 == s[i].size()) {
                cout << s[i][0] << endl;
                return 0;
            }
        }
    } 

    else if (hasMax) {
        for (int i = 0; i < 4; i++) {
            if (c[3] + 2 == s[i].size()) {
                cout << s[i][0] << endl;
                return 0;
            }
        }
    }

	return 0;
}