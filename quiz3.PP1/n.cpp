#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string s1 = "";
    for(int i = 0 ; i < s.size() ; i++){
       if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
        s1 += s[i];
       }
    }
    cout << s1;
}