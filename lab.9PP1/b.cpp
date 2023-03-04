#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> m(n);
    vector<int> m1;
    vector<int> m2;
    for(int i = 0 ; i < n ; i++){
        cin >> m[i];
    }
    for(int i = 0 ; i < m.size() ; i++){
        if(m[i] % 2 == 0){
            m2.push_back(m[i]);
        }
        else m1.push_back(m[i]);
    }
    sort(m2.begin(), m2.end());
    reverse(m2.begin(), m2.end());
    sort(m1.begin(), m1.end());
    for(int i = 0 ; i < m2.size();i++){
        cout << m2[i] << " ";
    }
    for(int  i = 0 ; i < m1.size() ; i++){
        cout << m1[i] << " ";
    }
}