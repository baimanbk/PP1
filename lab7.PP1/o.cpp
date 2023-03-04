#include <bits/stdc++.h>

using namespace std;

string qqqqqq = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string to_kynari(int n, int k) {
    if(n == 0) return "";
    int l = n % k;
    return to_kynari(n / k, k) + qqqqqq[l];
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << to_kynari(n, k) << '\n';
}