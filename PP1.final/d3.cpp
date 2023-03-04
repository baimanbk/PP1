#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int cnt = 0;
    if(a>= 65 && a <= 90 || a >= 97 && a<= 122){
        cnt++;
    }
    if(b>= 65 && b <= 90 || b >= 97 && b <= 122){
        cnt++;
    }
    if(c>= 65 && c <= 90 || c >= 97 && c <= 122){
        cnt++;
    }
    if(d>= 65 && d <= 90 || d >= 97 && d<= 122){
        cnt++;
    }
    if(cnt == 4){
        cout << "YES";
    }
    else cout << "NO";
}