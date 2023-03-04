#include <bits/stdc++.h>

using namespace std;

void sd(string s){
    for(int i = 0 ; i < s.size() ; i ++){
        if(i % 2 == 0){
            s[i] = toupper(s[i]);
            
        }
        cout << s[i];

    }
}
int main(){
    string s;
    cin >> s;
    sd(s);
}