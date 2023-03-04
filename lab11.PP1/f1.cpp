#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    while(n--){
        cin >> m;
        int a[m];
        for(int i = 0 ; i < m ; i++){
            cin >> a[i];
        }
        sort(a, a+m);
        for(int i = 0 ; i < m ; i++){
            if(a[i] == a[i+1]){
                cout << a[i] << " ";
            }
        }
        cout << '\n';
    }
    
}