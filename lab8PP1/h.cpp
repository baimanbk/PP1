#include <bits/stdc++.h>

using namespace std;
void sd(vector<int> mnv){
    for(int  i = 0 ; i < mnv.size() ;i++){
        cout << mnv[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    vector<int> mnv;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int t;
    cin >> t;
    int mn = 1000000;
    int mnindex;
    while(t--){
        for(int i = 0 ; i < v.size(); i++){
            if(v[i] < mn){
                mn = v[i];
                mnindex = i;
            }
        }
        v.erase(v.begin() + mnindex);
        mnv.push_back(mn);
        mn = INT_MAX;
    }
    sd(mnv);
    return 0;
}