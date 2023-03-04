#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin  >> n >> m;
    int arr[n][m];
    int maxi = 99999;
    int num = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0 ; i < n ; i ++){
            int sum = 0;
            
            for(int j = 0 ; j < m ; j ++){
                sum += arr[i][j];
        }
        if(sum < maxi){
            maxi = sum;
            num = i;
        }
    }
    cout << num + 1;
return 0;
}