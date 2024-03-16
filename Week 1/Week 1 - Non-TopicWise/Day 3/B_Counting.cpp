#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int count = 0;

    for (int i = a; i <= b; i++)
        count = count + 1;

    if (count == 0)
        cout << 0;
    else
        cout << count;

    return 0;
}