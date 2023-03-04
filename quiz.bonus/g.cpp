#include <iostream>


using namespace std;

   int main(){
    int a,b=0;
    cin >> a;
    int arr[a];
    int max;
    max = -1000000000;
    for(int i=0; i<a;i++){
        cin >> arr[i];
        b+=arr[i];
        if(arr[i]>max){
            max=arr[i];
            
        }}

    cout << b << " " << max;
    return 0;
}