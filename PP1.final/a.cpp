#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,e,f,g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    int sum = a*1 + b*2 + c*5 + d*10 + e*20 + f*50 + g*100;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(sum - x >= 0){
            cout << "Transaction accepted!";
            sum -= x;
        }
        else cout << "Transaction stopped!";
    }
}