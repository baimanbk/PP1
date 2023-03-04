#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int x;
    while(cin >> x){
        v[x] += 1;
    }
    for(int i = 1 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
}