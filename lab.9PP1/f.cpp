#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    deque<char> d;
    deque<char> de;
    for(int  i = 0 ; i < s.size(); i++){
        d.push_back(s[i]);
    }
    if(d[0] == ')'){
            cout << "NO";
            return 0;
        }
    for(int  i = 0 ; i < d.size();i++){
        if(d[i] == '('){
            de.push_back(d[i]);
        }
        else if(d[i] == ')' && de.empty()){
            cout << "NO";
            return 0;
        }
        else if(d[i] == ')'){
            de.pop_back();
        }
    }
    if(de.size() == 0){
        cout << "YES";
    }
    else cout << "NO";
}