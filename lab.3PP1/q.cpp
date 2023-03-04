#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    bool k = false;
    cin >> n;
    for(int i=2;i<n/2; ++i){
        if(n%i==0){
            k = true;
        }
    }
    if(k){
        cout << "No";
    }
    else cout << "Yes";
}