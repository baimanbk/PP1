#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int min = 99999999;
    int max= -9999999;
    for(int i = 0 ; i < n; i ++){
        cin >> a[i];
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    cout << max << " " << min;
    
}