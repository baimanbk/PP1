#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    for(int i = 0 ; i < n ; i++){
        string s;
        cin >> s;
        int n = 1;
        m[s] += n;
    }
    int cnt = 0;
    for(auto i : m){
        if(i.second == 3){
            cnt++;
        }
    }
    cout << cnt;
}