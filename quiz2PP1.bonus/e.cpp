#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = s.size() - (s.size()-1); i < s.size(); i++){
        sum += s[i] - '0';
    }
    for(int i = 0 ; i < s.size() ; i++){
        if(s[0] - '0' == sum % 10){
            cout << "YES";
            return 0;
        }
        else {cout << "NO";
        return 0;}
    }
}