#include <bits/stdc++.h>

using namespace std;
int degree(int n){
    return pow(2,n);
}
int main(){
    int n;
    cin >> n;
    cout << degree(n);
}