#include <iostream>


using namespace std;

   int main(){
    int a;
    cin >> a;
    int b,c,d,e;
    b=a/1000;
    e=(a/100)%10;
    c=(a%100)/10;
    d=a%10;
    int r= d*1000 + c*100 + e*10 + b;
    if(a==r){
        cout << "Yes";
    }
    else cout << "No";
    }
    