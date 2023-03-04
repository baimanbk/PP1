#include <bits/stdc++.h>

using namespace std;

bool isPalindrom(string s, string s1, int i){
    if(i == -1) {
        if(s == s1) {
            return true;
        } else {
            return false;
        }
    }
    return isPalindrom(s, s1 + s[i], i - 1);
}
int main(){
    string s, s1 = "";
    cin >> s;
    if(isPalindrom(s, s1, s.size() - 1)){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}