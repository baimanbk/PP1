#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
   getline(cin, s);
    string s1 = "";
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
        
       if(s[i] == 'z'){
           s[i] = 'a';
       }
       else if(s[i] == 'Z'){
          s[i] = 'A';
       }
       else s[i] = s[i] + 1;}
       
    }
   cout << s;
}