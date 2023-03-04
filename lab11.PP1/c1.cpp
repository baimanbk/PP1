#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1][n+1];
    for(int i = 1 ; i <n + 1 ; i++){
        for(int j = 1 ; j < n + 1; j++){
            a[i][j] = i+j;
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}