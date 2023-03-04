#include <bits/stdc++.h>

using namespace std;

int binary(int n, int arr[], int target, int l,int r){
    int mid = (r+l)/2;
    if(arr[mid]==target)return true;
    if(l==r)return false;
    
    if(arr[mid]>target){
        return binary(n, arr, )
    }
    
}
int main(){
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0 ; i< n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    if(binary(arr, n, target, 0, r-l)){
        cout << "Yes";
    }
    else cout << "No";
}
