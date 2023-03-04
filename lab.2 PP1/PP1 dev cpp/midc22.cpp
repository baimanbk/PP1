#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0 ; i < 1; i ++){
        cout << '\n';
        for(int j = 0 ; j < n ; j ++){
           cout << j << " ";
        }
    }
    for(int i = 1 ; i < n; i ++){
        cout <<'\n';
        for(int j = 0 ; j < 1; j ++){
            cout << i << " ";
            
        for(int j = 0 ; j < n - 1 ; j ++){
            int t= i;
            int y = j + 1;
            a[i][j] = y + t;
            cout << a[i][j] << " ";
        }
    }
    
}}