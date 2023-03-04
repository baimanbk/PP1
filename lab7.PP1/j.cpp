#include <bits/stdc++.h>

using namespace std;

int sd(string s,int sum){
    for(int i = 0 ; i  <s.size() ; i++){
        sum += (s[i] - '0') / 2; 
    }
    return sum;
}
int main(){
    int sum = 0;
    string s;
    cin >> s;
    cout << sd(s, sum);
}