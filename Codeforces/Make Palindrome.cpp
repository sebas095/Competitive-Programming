#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

vector<int> frec;

void solve(int n){
	char mid; // Cadena vacia
	bool end = false;
	string ans, tmp;

	while(n){
		if(n == 1){
			for(int i=0; i<26; i++){
				if(frec[i]){
					mid = (char)(i + 'a');
					n--;
					break;
				}
			}
			continue;
		}
		end = false;
		for(int i=0; i<26; i++){
			if(frec[i] >= 2){
				n -= 2;
				frec[i] -= 2;
				tmp.push_back((char)(i + 'a'));
				end = true;
			}
		}

		if(!end and n > 1){
			char aux;
			for(int i=0; i<26; i++){
				if(frec[i]){
					frec[i]--;
					tmp.push_back((char)(i + 'a'));
					break;
				}
			}

			for(int i=25; i>=0; i--){
				if(frec[i]){
					frec[i]--;
					break;
				}
			}
			n-=2;
		}
	}
	sort(tmp.begin(), tmp.end());
	ans = string(tmp.rbegin(), tmp.rend());
	(tmp.size() & 1)? cout << tmp << mid << ans << endl : cout << tmp << ans << endl;
}

int main(){
	fast;
	string s;
	frec.assign(26,0);
	cin>>s;
	for(int i=0; i<26; i++) frec[s[i]-'a']++;
	solve(s.size());
	return 0;
}