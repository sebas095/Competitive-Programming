#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
  int cases;
  cin >> cases;

  while(cases--){
    int N;
    cin >> N;
    cout << fixed;
    cout.precision(3);
    vector<double> students(N);
    double average = 0.0, count = 0.0, ans = 0.0;

    for(int i = 0; i < N; i++) cin >> students[i];
    for(int i = 0; i < N; i++){
      average += students[i];
    }

    average /= N;
    for(int i = 0; i < N; i++){
      if(students[i] > average) count += 1;
    }

    ans = (count / (double)N) * 100.000;
    cout << ans << "%" << endl;
  }

  return 0;
}
