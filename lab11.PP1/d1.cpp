#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> v;
    for(int i = 0 ; i < s.size(); i++){
        if(i % 2 == 0){
            s[i] = s[i] - '0';
            v.push_back(s[i]);
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        if(i == v.size()-1){
            cout << v[i];
            break;
        }
        cout << v[i] << '+';
    }
}
