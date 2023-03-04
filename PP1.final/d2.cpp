#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int x,y;
    x = n - a;
    y = n - b;
    if(x+y > a+b){
        cout << a+b;
    }
    else cout << x+y;
}