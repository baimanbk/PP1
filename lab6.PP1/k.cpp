#include <bits/stdc++.h>

using namespace std;

void sd(string s,int sum){
    
    for(int i = 0 ; i < s.size();i++){
        sum += s[i] - 48;
    }
    cout << sum;
}
int main(){
    string s;
    cin >> s;
    int sum = 0;
    sd(s, sum);
}