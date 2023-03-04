#include <iostream>
using namespace std;

int main(){
	int a,b,c,s=0;
	cin>>a>>b>>c;
	a=b+a*c;
	for(int i=b;i<a;i+=c){s+=i;
	cout<<i<<" ";
	}
	cout<<endl<<"sum: "<<s;
}
