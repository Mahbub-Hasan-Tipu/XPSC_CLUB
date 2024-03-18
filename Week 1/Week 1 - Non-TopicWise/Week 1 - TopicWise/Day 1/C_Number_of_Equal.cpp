#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int l = 0; l < a.size(); l++)
    {
        cin >> a[l];
    }
    for (int l = 0; l < b.size(); l++)
    {
        cin >> b[l];
    }

    int cnt = 0;
    for (int l = 0; l < a.size(); l++)
    {
        for (int r = 0; r < b.size(); r++)
        {
            // if (a[l] == b[r])
            // {
            //     cnt++;
            // }
            cout << a[l] << " " << b[r] << '\n';
        }
    }

    cout << cnt;

    return 0;
}