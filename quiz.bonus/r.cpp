#include <iostream>
using namespace std;

int main(){
	int a,s=0,d=1;
	cin>>a;
	for(int m=a; m>0; m/=10){
			s=s+(m %10);
			d=d*(m %10);
		}
		cout<<s+d;
}
