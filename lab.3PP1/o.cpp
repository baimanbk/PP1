#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
    int n,m;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
    for (int i = 0; i < n-1; i++){
      if (arr[i]> arr[i+1]) {
        int b = arr[i]; 
        arr[i] = arr[i+1]; 
        arr[i+1] = b;
      } 
      }
    
  }
  for(int i=0;i<n;i++){
    cout<<arr[n-i-1]<<" ";
  }
}