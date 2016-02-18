#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define EPS 1e-9

using namespace std;

bool check(int m) {
  double n = (double)m;
  return ((log2(n) - floor(log2(n))) < EPS);
}

int main() {
  fast;
  int n, r;
  int ui, ri, li;

  while (cin >> n and n) {
    vector<int> score(3, 0);

    for (int i = 0; i < n; i++) {
      cin >> ui >> ri >> li;
      score[0] += check(ui);
      score[1] += check(ri);
      score[2] += check(li);
      int best = max(ui, max(ri, li));
    
      if (check(ui) and ui == best)      score[0]++;
      else if (check(ri) and ri == best) score[1]++;
      else if (check(li) and li == best) score[2]++;
    }
   
    if (score[0] > score[1] and score[0] > score[2]) 
      cout << "Uilton" << endl;
    
    else if (score[1] > score[2] and score[1] > score[0]) 
      cout << "Rita" << endl;
    
    else if (score[2] > score[0] and score[2] > score[1]) 
      cout << "Ingred" << endl;
    }
    else if (score[0] == score[1] or score[1] == score[2] or score[0] == score[2]) 
      cout << "URI" << endl; 
  }

  return 0;
}