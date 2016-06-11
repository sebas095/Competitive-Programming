#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

// Problem: https://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=&problem=1605&mosmsg=Submission+received+with+ID+16599634

using namespace std;

int memo[210][210];
vector<int> weights;
int total_sum = 0;

int nextInt(void) {
	string buffer;
	getline(cin, buffer);
	return atoi(buffer.c_str());
}

bool DP(int index, int accum) {
	if (index == weights.size()) return total_sum == (accum << 1);
	if (memo[index][accum] != -1) return memo[index][accum];      
	bool ans1 = DP(index + 1, accum + weights[index]);
	bool ans2 = DP(index + 1, accum);
	return memo[index][accum] = ans1 or ans2;
}

int main() {
	fast;
	int t, num;
	string s;
	t = nextInt();

	while (t--) {
		memset(memo, -1, sizeof(memo));
		weights.clear();
		total_sum = 0;
		getline(cin, s);
		stringstream ss(s);

		while (ss >> num) {
			weights.push_back(num);
			total_sum += num;
		}
		
		(DP(0, 0))? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}