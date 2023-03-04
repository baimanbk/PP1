#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    set<int> s1;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int m;
    cin >> m;
    for(int i = 0 ; i < m ; i++){
        int x;
        cin >> x;
        s1.insert(x);
    }
    set<int> :: iterator it;
    if(n != m){
    cout << "NO";
    return 0;
}
else {
    for(int i = 0 ; i < n ; i++){
        if(s[i])
    }
    }
}
