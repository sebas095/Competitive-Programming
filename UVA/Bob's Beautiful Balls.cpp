#include <iostream>
#include <string>
//#include <cstdio>
using namespace std;

void Fill(int w, int h, string &str, char grid[][51]){
    int i = 0, j = 0;
    int move_i = 0, move_j = 1;
    int L = -1, U = -1, R = w, D = h;
    for (int n = 0; n < str.size(); n++){
        grid[i][j] = str[n];
        if (j + move_j == R) {
            move_i = 1;
            move_j = 0;
            U++;
        }
        else if (i + move_i == D){
            move_i = 0;
            move_j = -1;
            R--;
        }
        else if (j + move_j == L) {
            move_i = -1;
            move_j = 0;
            D--;
        }
        else if (i + move_i == U) {
            move_i = 0;
            move_j = 1;
            L++;
        }
        i += move_i;
        j += move_j;
    }
}
bool analysis (int w, int h, char grid[][51])
{
    bool ok = 1;
    for (int i = 0; i < w && ok; i++){
        char c = grid[0][i];
        for (int j = 1; j < h; j++){
            if (grid[j][i] != c)
                ok = 0;
        }
    }
    return ok;
}
int main(){
    ios::sync_with_stdio(false);
  //  freopen("input.txt","rt",stdin);
    int T, Case = 1;
    string str;
    cin >> T;
    while (T--){
        cin >> str;
        int ans = 1000001;
        char grid[51][51];
        for (int i = 2; i < str.size(); i++){
            if (str.size() % i != 0) continue;

            int w = i, h = str.size()/i;

            Fill(w, h, str, grid);

            if (analysis(w, h, grid)){
                if (w+h < ans)
                    ans = w+h;
            }
        }
        cout << "Case " << Case++ << ": ";
        if (ans == 1000001) cout << -1 <<endl;
        else cout << ans <<endl;
    }
    return 0;
}