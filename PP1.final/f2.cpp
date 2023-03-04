#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int s[n];
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
    }
    int sum = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if(s[i] - s[i+1] < 0){
            int x = -(s[i] - s[i+1]);
            sum += x;
        }
        else sum += s[i] - s[i+1];
    }
    cout << sum;
}