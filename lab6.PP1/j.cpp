#include <bits/stdc++.h>

using namespace std;

int sd(int a,int b, int c, int d,int mx){
    mx = max(a,max(b,max(c,d)));
    cout << mx;
}
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int mx;
    sd(a,b,c,d,mx);
}