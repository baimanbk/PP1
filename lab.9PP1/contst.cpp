#include <bits/stdc++.h>

using namespace std;
//a = 4 b = 8 e = 3 i = 1 l = 1 o = 0 s = 5 t = 7 z = 2

int main(){
    string s;
    getline(cin, s);
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'a'){
            s[i] = '4';
        }
        else if(s[i] == 'b'){
            s[i] = '8';
        }
        else if(s[i]=='e'){
            s[i] = '3';
        }
        else if(s[i]=='i'){
            s[i] = '1';
        }
        else if(s[i]=='l'){
            s[i] = '1';
        }
        else if(s[i]=='o'){
            s[i] = '0';
        }
        else if(s[i]=='s'){
            s[i] = '5';
        }
        else if(s[i]=='t'){
            s[i] = '7';
        }
        else if(s[i]=='z'){
            s[i] = '2';
        }
    }
    cout << s;
}