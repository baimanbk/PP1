#include <bits/stdc++.h>
using namespace std;
bool p(vector <int> v,int i,int n){
  
    for(int j=2;j<v[i];j++){
        if(v[i]%j==0){
            //cout<<"No";
            return false;
        }
        
            
        
    }
return true;

}
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> v(n);
    for(int i=0;i<n; i++){
    
        cin >> v[i];
       
    }
    int k;
    cin >> k;

    for(int i=0; i<n;i++){
        if(v[i] >=k && (p(v,i,n)==true)){
            cnt++;
         
        }
        
    }
    cout << cnt;
    }