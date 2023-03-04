#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,mx=0;

    cin>>a;
    int arr[a];
    for (int i=0;i<a;i++)
    {
        cin>>arr[i];
        for (int j=i-1;j>=0;j--)
        {
            if (__gcd(arr[j],arr[i])>mx) mx=__gcd(arr[j],arr[i]);
        }
    }
    cout << mx;
}