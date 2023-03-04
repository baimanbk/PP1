#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    s+= " ";
    bool boolka = false;
    string s1 = "";
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] != ' '){
            s1+= s[i];
            if(s[i] >= '0' && s[i] <='9'){
                boolka = true;
            }
        }
        else {
            if(boolka == false){
                cout << s1 << '\n';
            }
            boolka = false;
            s1 = "";
        }
    }

}