#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a*a];
    int max = -10000000;
    int max2 =-10000000;
    for(int i = 0;i<a*a;i++){
        cin >> arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    
    for(int i = 0;i<a*a;i++){
        if(arr[i]>max2 && max > arr[i]){
         max2 = arr[i];
        }}}

    if(max2 == INT_MIN){
        cout << "0";
    }    
    else cout << max2;    
}