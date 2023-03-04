#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int l,r;
    cin >> l >> r;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<l-1;i++){
        cout << arr[i] << " ";
    }
    for(int i=r-1;i>=l-1;i--){    
        cout << arr[i] << " ";}
    for(int i=r;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
    

}