#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            cin >> a[i][j];
        }
    }
   for(int i = 0; i < n; i++){
        int k = 0;
        for(int j=n-1-i ; j < n ; j ++){
         cout << a[k][j] << " ";
         k++;   
        }
        
        cout << endl;
   }
   for(int i = 0 ; i < n - 1 ; i ++){
    int k = 0;
    for(int j = i +1 ; j < n ; j ++){
        cout << a[j][k] << " ";
        k++;
    }
    cout << endl;
   }
   
}