#include <bits/stdc++.h>

using namespace std;

int main(){
    char d;
    string s;
    cin >> d >> s;
    string s1 = "";
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] != d){
           s1 += s[i];
        }
    }
    cout << s1;
}