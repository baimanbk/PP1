#include <bits/stdc++.h>

using namespace std;
string s;

int n;
bool dop(string s, int n){
    int cnt = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(isdigit(s[i])){
            cnt++;
        }
    }
    if(cnt >= n){
        return true;
    }
    else return false;
}
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    if(dop(s, n)){
        
            cout << "YES";
        }
        else cout << "NO";
    
    }

