#include <iostream>
#include <cmath>
using namespace std;

int n, max;

int main () {
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
    int max = -1e9;
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        for (int j = 0; j < n; j++){
            a[i][j] = max;
            cout << a[i][j] << " ";
            }
        cout << endl;
        }
    }
