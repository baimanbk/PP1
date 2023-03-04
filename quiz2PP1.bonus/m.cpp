#include<bits/stdc++.h>


using namespace std;

int main(){
	
	double k, n, m;
	cin >> n >> m;
	k = m / n;
	
	for (int i = -60; i <= 60; i++){
		if (pow(2, i) == k){
        cout << "YES " << i; return 0;}
	}
	cout << "NO";
return 0;
}