#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string d;
    char f;
    cin >> s >> d >> f;
    for(int i = 0 ; i < s.size(); i++){
        for(int j = 0 ; j < d.size() ; j++){
            if(s[i] == d[j]){
                s[i] = f;
            }
        }
    }
    cout << s;
}