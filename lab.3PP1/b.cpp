#include <iostream>

using namespace std;

    int main(){
        int a;
        cin >> a;
        int arr[a];
        int sum = 0;
        for(int i=1;i<=a;i++){
            
            cin >> arr[i];
            if(arr[i] > 0){
            sum++;
        }}
        cout << sum;
        return 0;
    }