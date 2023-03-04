#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;
    for(int  i = n-1 ; i >= 0 ; i--){
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
            a = i;
            break;
        }
    }
    for(int i = 0 ; i < a ; i ++){
        if(i == 2 || i == 3 || i == 5 || i == 7 && i + a == n){
            b = i;
            cout << a << " " << b;
            return 0;
        }
        else if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
            b = i;
            if(a + b == n){
                cout << a << " " << b;
                return 0;
            }
        }
    } 
}