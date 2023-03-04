#include <iostream>

using namespace std;

    int main(){
        int a;
        long long int sum = 0;
        cin >> a;
        int arr[a];
        
        for(int i=1;i<=a;i++){
            cin >> arr[i];
            sum +=arr[i];


        }
        cout << sum;
    }