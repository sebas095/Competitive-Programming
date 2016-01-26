#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int credit(int i) {
  if (i == 0) return 2;
  if (i == 1) return 3;
  if (i == 2) return 4;
  if (i == 3) return 1;
}

int main() {
  fast;
  int cont = 0;
  double n, av = 0.0;

  while (true) {
    cin >> n;
    cout << fixed << setprecision(1);
    av += credit(cont) * n;
    cont++;

    if (cont == 4) {
      av /= 10.0;
      cout << "Media: " << av << endl;

      if (av >= 5.0 and av <= 6.9) {
        cin >> n;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << n << endl;

        av = (av + n) / 2.0;
        if (av >= 5.0) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;

        cout << "Media final: " << av << endl;
        break;
      }

      else {
        if (av >= 7.0) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;
        break;
      }
    }
  }
  return 0;
}
