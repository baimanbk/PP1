#include <bits/stdc++.h>

using namespace std;
void removeDupWord(string str)
{
    istringstream ss(str);
    string word;
    bool tr=true;
    while (ss >> word)
    {
        for(int i=0;i<word.size();i++){
            if(isdigit(word[i])) {
                tr=false;
            }
        }
        if(tr) cout << word << "\n";
        tr=true;
    }
}
 
 
int main(){
    string str;
    getline(cin ,str);
    removeDupWord(str);
}