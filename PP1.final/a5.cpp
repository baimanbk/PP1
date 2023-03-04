#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        vector<char> v;
        int sum = 0;
        for(int i = 0 ; i < x ; i++){
            char s;
            cin >> s;
            for(int i = 0 ; i < v.size(); i++){
                if(s == v[i]){
                    sum += 1;
                }
                else if(s != v[i]){
                    sum += 2;
                    v.push_back(s);
                }
            }
        }
        cout << sum << '\n';
    }
}