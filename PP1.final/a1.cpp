#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int l,r;
    cin >> l >> r;
    l = l-1;
    r = r-1;
    int a[n];
    for(int i = 0 ; i <  n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < l ; i++){
        cout << a[i] << " ";
    }
    for(int i = r; i >= l ; i--){
        cout << a[i] << " ";
    }
    for(int i = n-1 ; i > r ; i--){
        cout << a[i] << " ";
    }
}