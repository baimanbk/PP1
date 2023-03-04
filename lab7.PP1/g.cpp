#include <bits/stdc++.h>

using namespace std;

int sd(int n, int sum){
    for(int i = 1 ; i <= n; i++){
        sum *= i;
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    int sum = 1;
    cout << sd(n, sum);
}