#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    char x;
    cin >> x;
    int y;
    cin >> y;
    int sum = 0;
    for(int i = 0; i < s.size() ; i ++){
        if(s[i]==x){
            sum++;
        }
    }
    if(sum>=y){
        cout << "YES";
    }
    else cout << "NO";
}