#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n,s;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0; i<n;i++){
        s= arr[i]*arr[i];  
    cout << s << " ";
    }
    return 0;
}