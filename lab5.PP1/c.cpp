#include <bits/stdc++.h>

using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    string cur;
    for(int i = 0 ; i+t.size()-1 < s.size() ; i ++){
        cur = s.substr(i,t.size());
        if(cur == t){
            cout << "YES";
            exit(0);
        }}
     cout << "NO";
}