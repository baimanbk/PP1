#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> vec(n);
    for (int i = 0; i < n; i ++){
        cin >> vec[i].first >> vec[i].second;
    }
    sort(vec.begin(), vec.end());
    for (auto i : vec){
        cout << i.first << " " << i.second << endl;
    }
}