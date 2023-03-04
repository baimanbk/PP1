#include <iostream>


using namespace std;

   int main(){
    int a,b;
    cin >> a;
    int arr[a];
    int max;
    max = -1000000000;
    for(int i=0; i<a;i++){
        cin >> arr[i];
    
        if(arr[i]>max){
            max=arr[i];
            b = i+1;
        }}
    
    cout << b;
    return 0;
}