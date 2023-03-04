#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int mx = -1000000;
    int mn = 1000000;
    for(int i = 0 ; i < v.size(); i++){
        if(v[i] > mx){
            mx = v[i];
        }
        if(v[i] < mn){
            mn = v[i];
        }
    }
    cout << mx - mn;
}