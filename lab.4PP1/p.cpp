#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int sum = 0;
    
    for(int i = 0 ; i < n ; i ++){
        for( int j = 0 ; j < n ; j ++){
            cin >> arr[i][j];
        }
    }
    for( int i = 0 ; i < n ; i++){
        int j = n-1-i;
        sum +=arr[i][j];
    }
         
    
    cout << sum;
    return 0;
}   
