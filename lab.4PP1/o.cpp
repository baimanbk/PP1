#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int max = -99999999;
    int x,y;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j < n ;j ++){
            if(i == j){
                if(arr[i][j] > max){
                    max = arr[i][j];
                    x=i;
                    y=j;
                }
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << x + 1 << ";" << y+1;
}