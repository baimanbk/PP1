#include <iostream>
using namespace std;

int main(){
	int n,b,a;
	cin>>n;
	b=0;
	a=0;
    for(int i=0;i<1000000000;i++)
	{
    	a+=1;
    	if(i%7==0){n+=0;}
    	if(i%2==0 && i%7!=0){n+=(-4);}
    	if(i%2==1 && i%7!=0){n+=3;}
    	if(n<=0){break;
		}
	}	
	cout<<a<<endl;
}