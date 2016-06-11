#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void solve(map<string, string> &msj) {
  msj["brasil"] = "Feliz Natal!";
  msj["alemanha"] = "Frohliche Weihnachten!";
  msj["austria"] = "Frohe Weihnacht!";
  msj["coreia"] = "Chuk Sung Tan!";
  msj["espanha"] = "Feliz Navidad!";
  msj["grecia"] = "Kala Christougena!";
  msj["estados-unidos"] = "Merry Christmas!";
  msj["inglaterra"] = "Merry Christmas!";
  msj["australia"] = "Merry Christmas!";
  msj["portugal"] = "Feliz Natal!";
  msj["suecia"] = "God Jul!";
  msj["turquia"] = "Mutlu Noeller";
  msj["argentina"] = "Feliz Navidad!";
  msj["chile"] = "Feliz Navidad!";
  msj["mexico"] = "Feliz Navidad!";
  msj["antardida" ] = "Merry Christmas!";
  msj["canada"] = "Merry Christmas!";
  msj["irlanda"] = "Nollaig Shona Dhuit!";
  msj["belgica"] = "Zalig Kerstfeest!";
  msj["italia"] = "Buon Natale!";
  msj["libia" ] = "Buon Natale!";
  msj["siria"] = "Milad Mubarak!";
  msj["marrocos"] = "Milad Mubarak!";
  msj["japao"] = "Merii Kurisumasu!";
}

int main() {
  fast;
  map<string, string> decode;
  string countries;
  solve(decode);

  while (cin >> countries) {
    if (decode.count(countries)) {
      cout << decode[countries] << endl;
    }
    else cout << "--- NOT FOUND ---" << endl;
  }

  return 0;
}
