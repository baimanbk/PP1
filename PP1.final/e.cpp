#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int j = 0;
    for(int i = 0 ; i < n ; i ++){
        for(int i = 0 ; i < n-1-i; i++){
            cout << "." << " ";
        }
        cout << j+1 << " ";
        for(int i = n-i; i > n; i++){
            cout << "." << " ";
        }
        cout << '\n';
        j++;
    }
}