#include <bits/stdc++.h>
#include <cmath>
using namespace std;


int main(){
    int lvx,lvy,pnx,pny,shx,shy;
    cin >> lvx >> lvy >> pnx >> pny >> shx >> shy;
    if(shx>=lvx && shy<=lvy && shx <= pnx && shy>=pny){
        cout << "Yes";
    }
    else cout << "No";
}