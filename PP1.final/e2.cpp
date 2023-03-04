#include <bits/stdc++.h>

using namespace std;

int main(){
    string x,y;
    cin >> x >> y;
    for(int i = 0 ; i < x.size(); i++){
        if(x[i] >= 'A' && x[i] <= 'Z'){
            x[i] = x[i] + 32;
        }
    }
    for(int i = 0 ; i < y.size(); i++){
        if(y[i] >= 'A' && y[i] <= 'Z'){
            y[i] = y[i] + 32;
        }
    }
    if(x == y){
        cout << "Valid";
    }
    else cout << "Invalid";
}