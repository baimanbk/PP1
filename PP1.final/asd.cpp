#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        vector<string> v1;
        vector<string> v2;
        vector<string> v3;
        int x;
        cin >> x;
        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3 = 0;
        for(int i = 0 ; i < x ; i++){
            string s1;
            cin >> s1;
            v1.push_back(s1);
        }
        for(int i = 0 ; i < x ; i++){
            string s2;
            cin >> s2;
            v2.push_back(s2);
        }
        for(int i = 0 ; i < x ; i++){
            string s3;
            cin >> s3;
            v3.push_back(s3);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        sort(v3.begin(), v3.end());
        for(int i = 0 ; i < v1.size(); i++){
            if(v1[i] == v2[i] && v1[i] == v3[i]){
                v1.erase(v1.begin() + i);
                v2.erase(v2.begin() + i);
                v3.erase(v3.begin() + i);
            }
            else if(v1[i] != v2[i] && v1[i] != v3[i]){
                cnt1+=3;
            }
            else if(v1[i] != v2[i] && v1[i] == v3[i] || v1[i] == v2[i] && v1[i] != v3[i]){
                cnt1 += 1;
            }
        }
        for(int i = 0 ; i < v2.size(); i++){
            if(v2[i] != v1[i] && v2[i] != v3[i]){
                cnt2+=3;
            }
            else if(v2[i] != v1[i] && v2[i] == v3[i] || v2[i] == v1[i] && v2[i] != v3[i]){
                cnt2 += 1;
            }
        }
        for(int i = 0 ; i < v3.size(); i++){
            if(v3[i] != v2[i] && v3[i] != v1[i]){
                cnt3+=3;
            }
            else if(v3[i] != v2[i] && v3[i] == v1[i] || v3[i] == v2[i] && v3[i] != v1[i]){
                cnt3 += 1;
            }
        }
        cout << cnt1 << " " << cnt2 << " " << cnt3;
    }
    cout << '\n';
}