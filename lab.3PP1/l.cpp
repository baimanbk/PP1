
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,k,m;
    cin >> n;
    
    int sum = 0;
    int arr1[n];
    
    int arr3[m];
    for(int i=0;i<n;i++){
        cin >> arr1[i];}
    cin >> k;
    int arr2[k];
    m=n+k;
    for(int i=0;i<k;i++){
        cin >> arr2[i];}

    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];}

    for(int i=n;i<m;i++){
        arr3[i]=arr2[sum];
        sum++;}

    
  for (int i = 0; i < m; i++) {
    for (int i = 0; i < m-1; i++){
      if (arr3[i]> arr3[i+1]) {
        int b = arr3[i]; 
        arr3[i] = arr3[i+1]; 
        arr3[i+1] = b;
      } 
      }
    
  }
    
    for(int i=0; i<m; i++)
        cout << arr3[i] << " ";
        
}

    
    
    
    
    

