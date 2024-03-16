#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int got_coins = 0;

    for (int i = 1; i <= 2; i++)
    {
        got_coins = got_coins + max(a, b);

        if (a > b)
            a = max(a, b) - 1;
        else if (b > a)
            b = max(a, b) - 1;
    }

    cout << got_coins;
    // cout << max(4, 4);

    return 0;
}