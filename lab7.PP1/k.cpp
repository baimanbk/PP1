#include <bits/stdc++.h>

using namespace std;

int sd(string s, int mx){
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] - '0' > mx){
            mx = s[i] - '0';
        }
    }
    return mx;
}
int main(){
    string s;
    cin >> s;
    int mx = -10000000;
    cout << sd(s, mx);
}