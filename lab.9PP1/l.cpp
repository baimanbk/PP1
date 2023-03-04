#include <bits/stdc++.h>

using namespace std;
int n;
pair<int, int> m[555];

int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x,y;
        cin >> x >> y;
        m[i].first = x+y;
        m[i].second = i+1;
    }
    sort(m, m+n);
    for(int i = 0; i < n ; i++){
        cout << m[i].second << " ";
    }
}