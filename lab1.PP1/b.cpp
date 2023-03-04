#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k,m;
    cin >> k;
    m = k / 100 + k % 10;
    cout << m + n << endl;
}