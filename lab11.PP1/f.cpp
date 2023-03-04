#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    int cnt = 0;
    int q = min(a,b);
    for (int i = q; 1 <= i; i--)
    {
        if ((a % i) == 0 && (b % i) == 0)
            cnt++;

        if (cnt == k)
        {
            cout << i << endl;
            return 0;
        }
    }
}