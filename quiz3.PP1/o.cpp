#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    s += ' ';
    char mx;
    int mx1 = 0;
    for(int i = 0; i < s.size(); i++) {
        int cnt = 1;
        while(s[i] == s[i + 1]) {
            i++;
            cnt++;
        }

        if(cnt > mx1) {
            mx1 = cnt;
            cnt = 0;
            mx = s[i];
        }
    }

    cout << mx << ' ' << mx1 << '\n';
}