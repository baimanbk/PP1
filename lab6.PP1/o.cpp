#include <bits/stdc++.h>

using namespace std;

int sd(string s,int sum = 0){
    for(int i = 0 ; i < s.size(); i++){
        sum += s[i] - 48;
    }
    for(int i = 0 ; i < s.size();i++){
        if(sum % (s[s.size()-1] - '0') == 0){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    
}
int main(){
    string s;
    cin >> s;
    int sum = 0;
    sd(s, sum);
}