#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> log;
    for(int i = 0; i < n; i++){
        string mail;
        cin >> mail;
        if(mail.find("@gmail.com") != string::npos){
            log.push_back(mail);
        }
    }

    for(int i = 0; i < log.size(); i++){
        string s = "";
        string d = log[i];
        for(int j = 0; j < log[i].size(); j++){
            s += d[j];
            if(d[j] == '@') break;
        }
        s.pop_back();
        cout << s << endl;
    }
}