#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int sz = 4 - s.size();

    for (int i = 1; i <= sz; i++)
        cout << 0;

    cout << s;

    return 0;
}