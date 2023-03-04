#include <bits/stdc++.h>

using namespace std;

int sd(int n){
    for(int i = 0 ; i < 63;i++){
        if(pow(2, i) == n){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No"; 
}
int main() {
    int n;
    cin >> n;
    sd(n);
}