#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   getline(cin,s);
   int c;
   cin >> c;
   vector <char> v(c);
   
   for(int i=0;i<c;i++){
      cin >> v[i];
   }

   sort(v.begin(),v.end());
   int w=0;
   int cnt=0;

   while(w!=c){
      for(int i=0;i<s.size();i++){
         if(v[w]==s[i]){
            cnt++;
         }
      }
         cout << v[w] << " - " << cnt<<endl;
      cnt=0;
      w++;
   }
}