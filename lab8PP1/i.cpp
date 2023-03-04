#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int  i = 0 ; i  <n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int f;
    cin >> f;
    for(int i = 0; i < v.size() ; i++){
        if(v[i] == f){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}