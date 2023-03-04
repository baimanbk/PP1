#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        v.push_back(x);
    }
    int a,b;
    cin >> a >> b;
    for(int i = 0 ; i < a ; i++){
        cout << v[i] << " ";
    }
    for(int i = b ; i >= a ; i--){
        cout << v[i] << " ";
    }
    for(int i = b+1 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
}