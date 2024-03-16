#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;

    int total_biscutes = 0;

    while (a <= t)
    {
        total_biscutes = total_biscutes + b;
        t = (t + 0.5) - a;
    }

    cout << total_biscutes;

    return 0;
}