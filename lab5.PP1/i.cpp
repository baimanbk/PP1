#include <bits/stdc++.h>

using namespace std;

int main(){
    string n,m;
    cin >> n >>m;
    int sum = 0 ;
    int sum1 = 0;
    for(int i = 0 ; i < n.size() ; i++){
        sum += n[i] - 96;
    }
    for(int j = 0 ; j <m.size() ; j++){
        sum1 += m[j] - 96;
    }
    if(sum1==sum){
        cout << "YES";
    }
    else cout << "NO";}