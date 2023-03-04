#include <iostream> 
using namespace std; 
 
int main(){
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    if(x>=a && b<=(x-a)+y){cout << "Yes";}
    else { cout << "No"; 
    }


    
}