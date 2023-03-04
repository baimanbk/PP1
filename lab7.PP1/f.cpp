#include <bits/stdc++.h>

using namespace std;

int sd(string s,int cnt){
    for(int i = 0 ; i < s.size(); i++){
        if((s[i] - 48) % 2 == 0){
            cnt++;
        }
    }
    return cnt;
}
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    cout << sd(s, cnt);
}