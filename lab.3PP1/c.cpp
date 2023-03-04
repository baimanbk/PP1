#include <iostream>
using namespace std;

   int main(){
    int a,b;
    cin >> a;
    long long int arr[a];
    int max;
    max = -99999999;
    for(int i=0;i<a;i++){
        cin >> arr[i];  
        if(arr[i]>max) {
            max=arr[i];
        }}

    
    cout << max;   
    return 0;} 


    

   