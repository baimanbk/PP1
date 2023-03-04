#include <iostream>


using namespace std;

int main(){
    int zar,h = 0;
    int a = 500000;
    int g = 0;
    cin >> zar;
    while(g<a){
        h++;
        g+=zar * 0.3;
        zar*=1.1;

    }
    cout << h;

   }