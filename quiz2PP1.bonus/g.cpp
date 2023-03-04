#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,s;
    cin >> n >> m >> s;
    if(s==1){
    for(int i = n; i <=m; i++){
        if(int(sqrt(i)) == sqrt(i)){
            cout << i << " ";
        }
    }}
    else{
    for(int i = m ; i >= n; i--){
        if(int(sqrt(i)) == sqrt(i)){
            cout << i << " ";
        }
    }}
    
}