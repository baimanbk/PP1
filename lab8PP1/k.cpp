#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int t;
    cin >> t;
    int mx = -9999999;
    int sum = 0;
    int index;
    while(t--){
        for(int i = 0 ; i < v.size() ; i++){
            if(v[i] > mx){
                mx = v[i];
                index = i;
            }
        }
        sum += mx;
        v.erase(v.begin() + index);
        mx = -99999999;
    }
    cout << sum;
}