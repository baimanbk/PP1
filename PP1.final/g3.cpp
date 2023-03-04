#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string s1 = "";
    sort(s.begin(), s.end());
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] != s[i+1]){
            s1 += s[i];
        }
    }
    cout << s1;
}