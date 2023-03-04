#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;
    sum += s[0] - '0';
    sum += s[s.size()-1] - '0';
    cout << sum;
}