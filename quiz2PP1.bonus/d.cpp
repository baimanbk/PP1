#include <bits/stdc++.h>

using namespace std;
int a[1001];
int main(){
    int n;
    cin >> n;
    int mx  =0;
    for(int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i = 1 ; i <= 1000 ; i++){
        if(a[i] > mx){
            mx = a[i];
        }
    }  
    for(int i = 1000 ; i >= 1 ; i --){
        if(a[i] == mx){
            cout << i << " ";
        }
    }
}