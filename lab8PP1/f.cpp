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
    int k,b;
    cin >> k >> b;
    v.insert(v.begin() + k, b);
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
}