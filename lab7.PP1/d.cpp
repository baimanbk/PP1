#include <bits/stdc++.h>

using namespace std;
int sum(string s, int i){
    if(i == s.size()-1) return s[i] - '0';
    return s[i] - '0' + sum(s,i+1);
}

int sum(int a){}
int main(){
   string s;
   cin >> s;
   cout << sum(s, 0);

}