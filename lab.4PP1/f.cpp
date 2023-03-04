#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int max = -100000000;
    int index1 = 0, index2 = 0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> arr[i][j];
            if(i==0 && j== 0 || arr[i][j]>max){
                max = arr[i][j];
                index1 = i;
                index2 = j;
            }
                
        }
        

    }
    cout << ++index1 << " " << ++index2;
}