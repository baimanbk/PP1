#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(i % 2 == 0){
            if(s[i] >= 'a' && s[i] <= 'z'){
                cnt++;
            }
        }
        else if(i % 2 != 0){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                cnt++;
            }
        }
    }
    if(cnt == s.size()){
        cout << "YES";
        return 0;
    }
    else cout << "NO";
}