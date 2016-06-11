#include <bits/stdc++.h>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
	fast;
	int a, b, c;
	double ans1, ans2;
	cin >> a >> b >> c;

	ans1 = (-b - sqrt((b * b) - 4 * a * c)) / (2.0 * a);
	ans2 = (-b + sqrt((b * b) - 4 * a * c)) / (2.0 * a);

	double maxi, mini;
	mini = min(ans1, ans2);
	maxi = max(ans1, ans2);

	cout << fixed << setprecision(15) << maxi << endl << mini << endl;

	return 0;
}
