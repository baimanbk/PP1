#include <bits/stdc++.h>

using namespace std;

int sd(int n,int a[],int t){
    for(int i  = 0 ; i < n ; i++){
        if(a[i] == t){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int t;
    cin >> t;
    sd(n, a, t);

}