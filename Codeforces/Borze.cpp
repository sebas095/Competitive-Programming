#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

// https://github.com/lamphanviet/competitive-programming/blob/master/uva-online-judge/accepted-solutions/10664%20-%20Luggage.cpp
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1605

using namespace std;

int main(){
    fast;
    string s, ans = "";
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.')
            ans += "0";
        else if(i < (s.size() - 1) and s[i] == '-' && s[i + 1] == '.') {
            ans += "1";
            i++;
        }
        else if(i < (s.size() - 1) and s[i] == '-' && s[i + 1] == '-') {
            ans += "2";
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}
