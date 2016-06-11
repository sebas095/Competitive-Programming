#include <iostream>
#include <string>
#include <vector>
using namespace std;

int peliculamasparecida(string q, vector<string> &movies){
  int hamming = 0, idx = 0, menor = 1<<30 , menor2 = 1<<30;
  for(int i = 0; i < movies.size(); ++i){
    for(int j = 0; j < movies[i].size(); ++j){
    hamming=0;
      if(j + q.size() < movies[i].size()){
        for(int k = 0; k < q.size(); ++k){
          if(q[k] != movies[i][j+k]) hamming += 1;
        }      
        if(hamming<menor){
             menor=hamming;
             idx=i+1;
           }
      }
      
     }
     if(menor2<menor){
       menor2=menor;
       idx=i+1;
      }
   }
   
   return idx;
  
  }


int main(){
    int m,q;
    while(cin>>m>>q){
      vector<string> movies (m);
      for(int i = 0; i < m; ++i)
        cin >> movies[i];
      for(int i = 0; i < q; ++i){
        string query;cin >> query;
        int idx = peliculamasparecida(query, movies);
        cout<<idx<<endl;
      }
    }
    return 0;
}

 