#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, string> m;
    for(int i = 0 ; i < n ; i++){
        string x,y;
        cin >> x >> y;
        m[x] = y;
    }
    int g;
    cin >> g;
    map<string, string> m1;
    for(int i = 0 ; i < g ; i++){
        string x,y;
        cin >> x >> y;
        if(m.find(x) != m.end()){
            if(m[x] == y){
                cout << "correct password" << '\n';
            }
            else cout << "password error" << '\n';
        }
        else cout << "login error" << '\n';
    }

}