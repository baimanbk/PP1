#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    int cnt = 0;
    for(int i = 0 ; i < n.size() ; i ++){
        if(n[i] == 'a'){
            cnt++;
        }
        else if(n[i] =='e'){
            cnt++;
        }
        else if(n[i] == 'i'){
            cnt++;
        }
        else if(n[i] == 'o'){
            cnt++;
        }
        else if(n[i] == 'u'){
            cnt++;
        }
        continue;;
    }
    cout << cnt;
}