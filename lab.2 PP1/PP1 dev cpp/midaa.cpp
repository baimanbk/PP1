#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int b;
    
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> a[i][j];
        }
    }
    int r = 0;
    cin >> b;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            if(a[i][j]>b){
                r++;
            }
        }
    }
    if(r>=1){
        cout << "Penalty!";
    }
    else cout << "fdifgjkjfv";