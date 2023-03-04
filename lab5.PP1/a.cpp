#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    int sum1 = 0,sum2 = 0;
    cin >> a;
    for(int i = 0 ; i < a.size() ; i ++){
        
        if(a[i] >= 'a' && a[i] <= 'z') ++ sum1;
        else ++ sum2;
    }
    cout << sum1 << " " << sum2;
}
