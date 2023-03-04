#include <bits/stdc++.h>

using namespace std;
int cnt[10];
string n;
int main(){
    
    cin >> n;
    for(int i = 0 ; i < n.size() ; i ++){
        cnt[n[i] - '0']++;
    }
    int mx = 0;
    int mn = 99999999;
    for(int i = 0 ; i < 9 ; i ++){
        if(cnt[i]==0)continue;
        if(cnt[i]>mx){
            mx = cnt[i];
        }
        if(cnt[i]<mn){
            mn = cnt[i];
        }
    }
    
    if(mx == mn){
        cout << "YES";
    }
    else cout << "NO";
      
}