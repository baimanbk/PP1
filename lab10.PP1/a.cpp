#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> v;
    vector<int> v1;
    for(int i=0; i<n; i++){
        string x;
        int y;
        cin >> x >> y;
        v.push_back(x);
        v1.push_back(y);
    }

    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());

    for(int i = 0; i < n; i++) {
        cout << v[i] << ' ' << v1[i] << '\n';
    }
}