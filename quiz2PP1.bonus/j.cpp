#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int max = -1000000;
    int min = 1000000;
    for(int i = 0 ; i < s.size();i++){
       if(s[i]- '0' > max){
            max = s[i] - '0';
        }
        if(s[i]- '0' < min){
            min = s[i] - '0';
        }
         
    }
    cout << max << " " << min;
}