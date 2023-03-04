#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    
    int arr[a][a];
    int max = -100000;
    for(int i=0;i<a;i++){
        
        for(int j=0;j<a;j++){
            cin >> arr[i][j];
            
            if(arr[i][j]>max){
                max = arr[i][j];
            }



        }
    }
    cout << max;
}