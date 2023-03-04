#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<a;i++){
        cin >> arr[i];
        if(arr[i]>max)
            max = arr[i];       
        if(arr[i]<min)
            min = arr[i];}
        
    for(int i=0;i<a;i++){
        if(max == arr[i])
        arr[i]=min;
        cout << arr[i] << " ";
    }       
    
    return 0;}

    
    


    


