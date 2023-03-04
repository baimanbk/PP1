#include <bits/stdc++.h>

using namespace std;

int qyz(double n, double m, double x){
    x = (m * 100) / n;
    cout << x;
}
int main(){
    double n,m,x;
    
    cin >> n >> m;
    qyz(n, m, x);
}
