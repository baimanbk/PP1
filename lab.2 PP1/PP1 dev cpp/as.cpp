#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    int cnt = 0;
    for(int i = 0 ; i < n.size() ; i++){
        if(n[i] == '7' && n[i+1] == '5'){
            cnt++;
        }
    }
    cout << cnt;
}