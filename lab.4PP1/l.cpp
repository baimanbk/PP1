#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int arr[n][m];
    int sum = 0;
    int x;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> arr[i][j];
        }
    }
    cout << "coordinates of min elements:" << '\n';
    for(int j = 0 ; j < m ; j ++){
        int mini = 9999999;
        for(int i = 0 ; i < n ; i ++){
            if(arr[i][j]< mini){
                mini = arr[i][j];
                x = i;
            }
            
        }
        cout << x + 1 <<  ";" << j + 1 << '\n';
    }
    cout << '\n';
    for(int j = 0 ; j < m ; j ++){
        int mini = 999999;
        for(int i = 0; i < n ;i ++ ){
            mini = min(mini,arr[i][j]); 
                      
        }
        sum += mini;
        
    }
    cout << "Their sum:" << '\n';
    cout << sum;
    
}   
    
    

  