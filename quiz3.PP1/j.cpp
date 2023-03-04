#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, d, f;
    cin >> s;
    f = s;
    
    int n = s.length();
    while(n > 0){
        d = s;
        reverse(s.begin(), s.end());

        if(d != s){
            break;
        }
        f.pop_back();
        s = f;
        n--;
    }
    cout << n;
    
}