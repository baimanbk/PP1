
#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;
    set<char> s(begin(a), end(a));
    set<char> d;
    for(auto i : s){
        if(i >= 'A' && i <= 'Z'){
            i = i + 32;
            d.insert(i);
        }
        else d.insert(i);
    }
    cout << d.size() << '\n';
    for(auto i : d){
        cout << i << " ";
    }
}