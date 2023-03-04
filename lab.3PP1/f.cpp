#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n; cin >> n;
    int z[n]; 
    
    for (int i =0; i<n; i++){
        cin >> z[i];
        
    }
    for (int i =0; i<n; i++){
        cout << z[n- i - 1]<< " ";
    }
}

