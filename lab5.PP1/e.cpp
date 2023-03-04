#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sum1 = 0;
    int sum2 = 0;
    int k;
    for(int i = 0 ; i < s.size() ; i ++){
        if(i % 2 == 0){
            sum1 += s[i] - '0';
        }
        else if(i % 2 != 0){sum2 += s[i] - '0';}
    }
    if(sum1==sum2){
        cout << "YES";
    } 
    else cout << "NO";
}