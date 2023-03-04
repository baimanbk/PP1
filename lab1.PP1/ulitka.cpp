#include <iostream>

using namespace std;

    int main(){
        int h,a,b;
        cin >> h >> a >> b;
        int n = ((h-a)/(a-b))+1;
        cout << n;
    }