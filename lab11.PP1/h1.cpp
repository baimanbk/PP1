#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,r;
    cin >> n >> r;
    map<string, int> m;
    for(int  i = 0 ; i < n ;i ++){
        string s;
        int t;
        cin >> s;
        cin >> t;
        m[s] += t;
    }
    while(r--){
        int x;
        cin >> x;
        string y;
        int sum;
        if(x == 1){
            cin >> y;
            cin >> sum;
            m[y] += sum;
        }
        else if(x == 2){
            cin >> y;
            for(auto i : m){
                cout << m[y];
            }
        }
        cout << '\n';
    }
}