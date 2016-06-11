#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;  

int main(){
    fast;  
    string str;  
    int num;  
    int t;  
    cin>>t;
    for(int i=1;i<=t;i++){  
        cout<<"Case "<<i<<":"<<endl;  
        int m,n;  
        cin>>n>>m;  
        deque<int>q;  
        while(m--){  
            cin>>str;  
            if(str=="pushLeft"){  
                cin>>num;  
                if(q.size() != n ){  
                    q.push_back(num);  
                    cout<<"Pushed in left: "<<num<<endl;  
                }  
                else  
                    cout<<"The queue is full"<<endl;  
            }  
            else if(str=="pushRight"){  
                cin>>num;  
                if(q.size() != n){  
                    q.push_front(num);  
                    cout<<"Pushed in right: "<<num<<endl;  
                }  
                else  
                    cout<<"The queue is full"<<endl;  
            }  
            else if(str=="popRight"){  
                if(q.empty())  
                    cout<<"The queue is empty"<<endl;  
                else {  
                    cout<<"Popped from right: "<<q.front()<<endl;  
                    q.pop_front();  
                }  
            }  
            else{  
                if(q.empty())  
                    cout<<"The queue is empty"<<endl;  
                else{  
                    cout<<"Popped from left: "<<q.back()<<endl;  
                    q.pop_back();  
                }  
            }  
        }  
    }  
    return 0;  
} 