#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int max = -99999999;
    int min = 99999999;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i ++){
        int sum1 = 0 ;
        int sum2 = 0 ;
        for(int j = 0 ; j < m ; j ++){
            if(a[i][j]>max){
                max = a[i][j];
            }
            if(a[i][j]<min){
                min = a[i][j];
            }
        }
    }
    int cnt_min = 0, cnt_max = 0;
    for(int i = 0 ; i < n ; i ++){
        
        for(int j = 0 ; j < m ; j ++){
            if(a[i][j] == max) {
                cnt_max++;
            }
            if(a[i][j]==min){
                cnt_min++;
            }
        }
    }
    int f,g;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            if(a[i][j] == max){
                a[i][j] = -a[i][j];
                
            }
            if(a[i][j]==min){
                a[i][j] = pow(a[i][j],2);
            }
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    int mx = -9999999;
    int mn = 999999;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            if(a[i][j]>mx){
                mx= a[i][j];
            }
            if(a[i][j] < mn){
                mn = a[i][j];
            }
            
        }
    }
    cout << mx << " " << mn << endl;
}