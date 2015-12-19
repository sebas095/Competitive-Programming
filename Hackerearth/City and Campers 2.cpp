#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int p[100009], sz[100009], groups[100009];
int n, max_size = 0;

int find_set(int x) {
	return (p[x] == x)? x : p[x] = find_set(p[x]);
}

void union_set(int x, int y) {
	int px = find_set(x);
	int py = find_set(y);
	if (px == py) return;
	groups[sz[px]]--; // Sacamos un grupo de sz[px] elementos
	groups[sz[py]]--; // Sacamos un grupo de sz[py] elementos
	groups[sz[px] + sz[py]]++; // Se crea un grupo nuevo de (sz[px] + sz[py]) elementos
	if (max_size < (sz[px] + sz[py]))
		max_size = sz[px] + sz[py]; // Mantenemos actualizado la maxima cantidad de elementos que haya
	p[py] = px;
	sz[px] += sz[py];
}

void init() {
	for (int i = 0; i < 100009; i++) {
		p[i] = i;
		sz[i] = 1;
	}
	groups[1] = n;
	max_size = 1;
}

void solve(int a, int b) {
	union_set(a, b);
	int prev = 1, curr = 0, min_dif = n + 1;
	while (groups[prev] == 0) prev++;
	if (prev == max_size) {
		// Si solo existe un unico grupo la diferencia es 0
		cout << "0" << endl;
		return;
	}
	while (prev < max_size) {
		curr = prev + 1;
		if (groups[prev] > 1) {
			// Si hay mas de un grupo con x elementos la diferencia es 0
			cout << "0" << endl;
			return;
		}
		while (groups[curr] == 0) curr++;
		if((curr - prev) < min_dif)
			min_dif = curr - prev;
		prev = curr;
	}
	cout << min_dif << endl;
}

int main() {
	fast;
	int q, a, b;
	cin >> n >> q;
	init();
	while (q--) {
		cin >> a >> b;
		solve(a, b);
	}
	return 0;
}