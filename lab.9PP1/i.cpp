#include <bits/stdc++.h>

using namespace std;
deque<string> d;
void sd(int n){
    string s;
    cin >> s;
    for(int i = 0 ; i< d.size(); i++){
        if(s == d[i]){
            cout << "user already exists" << '\n';
            return;
        }
    }
    d.push_back(s);
    cout << "new user added" << '\n';
}

int main(){
    deque<string> d;
    int n;
    cin >> n;
    while(n--){
        sd(n);
    }
}