#include <bits/stdc++.h>

using namespace std;

int sum(int sum1) {
    int x;
    cin >> x;
    if(x == 0) {
        return sum1;
    } else {
        return sum(sum1 + x);
    }
}
int main(){
    int sum1 = 0;
    cout << sum(sum1);
}