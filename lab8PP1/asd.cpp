#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    sort(s.begin(), s.end());
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '(' && s[s.size() - 1 - i] == ')'){
            cnt++;
        }
    }
    cout << s;
    cout << cnt;
    if(cnt == s.size()/2){
        cout << "Yes";
    }
    else cout << "No";
}