#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	fast;
	int t, id, passes;
	char n;
	cin >> t;
	while( t-- ) {
		int aux, top;
		stack<int>st;
		cin >> passes >> id;
		st.push(id);

		while( passes-- ) {
			cin >> n;
			if( n == 'P') {
				cin >> id;
				st.push(id);
			}
			else {
				aux = st.top(); st.pop();
				top = st.top();
				st.push(aux);
				st.push(top);
			}
		}

		cout << "Player " << st.top() << endl;
	}
	return 0;
}