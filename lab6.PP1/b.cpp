#include <bits/stdc++.h>

using namespace std;

int n;
int a[10000], b[10000], diff[10000];

void read(int n, int x[]) {
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
}

void print(int n, int x[]) {
    for(int i = 0; i < n; i++) {
        cout << x[i] << ' ';
    }
    cout << '\n';
}

void difference(int n, int a[], int b[], int d[]) {
    for(int i = 0; i < n; i++) {
        d[i] = abs(a[i] - b[i]);
    }
}

int main() {
    cin >> n;
    read(n, a);
    read(n, b);

    difference(n, a, b, diff);
    print(n, diff);
}