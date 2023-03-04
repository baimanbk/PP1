#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int day = 0;
    while(n > 0){
        n = n - k;
        day++;
    }
    cout << day;
}