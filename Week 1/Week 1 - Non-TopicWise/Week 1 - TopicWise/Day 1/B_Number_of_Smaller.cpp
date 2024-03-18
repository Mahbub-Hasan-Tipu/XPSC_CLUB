#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    int cnt = 0;

    for (int r = 0; r < m; r++)
    {
        for (int l = 0; l <= r && l < n; l++)
        {
            if (a[l] < b[r])
            {
                cnt++;
            }
            // cout << r << " " << l << endl;
        }

        cout << cnt << " ";
        cnt = 0;
    }

    return 0;
}