#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt1 = 0;
    int cnt2 = 0;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            sum1 += a[i];
            cnt1++;
        }
        else if(a[i] % 2 != 0){
            sum2 += a[i];
            cnt2 ++;
        }
    }
    /*cout << sum1 << " " << sum2 << " " << cnt1 << " " << cnt2;*/
    cout << "Left hand magic power: " << sum1 * cnt1 << '\n';
    cout << "Right hand magic power: " << sum2 * cnt2 << '\n';

}