#include <bits/stdc++.h>

using namespace std;

void sd(string s){
    for(int i = 0 ; i < s.size(); i++){
    if(s[i] < 65 || s[i] > 90){
        s[i] = s[i] - 32;
        cout << s[i];
    }
    else cout << s;
    
}
}

int main(){
    string s;
    cin >> s;
    sd(s);
}