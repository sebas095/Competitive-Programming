#include <string>
#include <cstring>
#include <iostream>

using namespace std;
typedef long long int lld;

int main (int argc, char const* argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lld heavy = 0, metal = 0;
    string msj;
    cin >> msj;

    for (unsigned int i = 0; i < msj.size();)    {
        if(msj[i] == 'h'){
            if(strcmp("heavy",msj.substr(i,5).c_str()) == 0){
                heavy++;
                i += 5;
            }
            else i++;

        }
        else if(msj[i] == 'm'){
            if(strcmp("metal",msj.substr(i,5).c_str()) == 0){
                metal += heavy;
                i += 5;
            }
            else i++;

        }
        else i++;

    }
    cout << metal <<endl;
    return 0;
}