#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    int sum;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
            if(arr[i][j]<0){
                sum++;
            }
        }
    }
    cout << sum;
}