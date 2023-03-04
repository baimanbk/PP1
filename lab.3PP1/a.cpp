#include <iostream>

using namespace std;

int main(){
    int n,b;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> b;
        if(b%2!=0)
            cout << b << " ";
    }
    
}