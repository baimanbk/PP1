#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    long long int sum=0;

    int l,r;
    cin >> l >> r;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=l-1;i<r;i++){
    sum = sum + arr[i];}
    cout << sum;



}
