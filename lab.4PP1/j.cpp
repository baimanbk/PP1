#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j ++ ){
            if((i + j) % 2 == 0){
                arr[i][j] += 1;
            }
            else if((i + j) % 2 != 0){
                arr[i][j] -= 1;
            }
        }
    }
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}