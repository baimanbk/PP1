#include <bits/stdc++.h>

using namespace std;

void asd(string s){
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i]!= 'u' &&s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' ){
            cout << s[i];
        }
        
    }
    

}
int main(){
    string s;
   
    getline(cin,s);
    asd(s);
} 