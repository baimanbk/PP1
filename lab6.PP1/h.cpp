#include <bits/stdc++.h>

using namespace std;

bool fg(string s,int cnt){
    
    for(int i = 0 ; i < s.size() ; i++){
        if((s[i]-48) % 2 == 0){
        cnt++;    
        }
        
    }
if(cnt == s.size()){
    return true;
}
else return false;
}
int main(){
    int cnt = 0;
    string s;
    cin >> s;
    if(fg(s, cnt) == true)cout << "Valid";
    else cout << "Not valid";
}