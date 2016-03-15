#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
	fast;
	int tc, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;
	cin >> tc;

	while (tc--) {
		cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy >> Rx >> Ry;
		if ((Rx >= Ax and Rx <= Bx) and (Ry <= Dy and Ry >= Ay)) 
			cout << true << endl;
		else cout << false << endl;
	}

	return 0;
}