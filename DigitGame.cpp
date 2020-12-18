#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, o, e;
    char k[1000];
    cin >> t;
    while (t--)
    {
        o = 0;
        e = 0;
        cin >> n;
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (k[i] % 2)
                    o++;
            }
            else
            {
                if (k[i] % 2 == 0)
                    e++;
            }
        }
        if (n % 2 == 1)
        {
            cout << (o ? 1 : 2) << endl;
        }
        else
            cout << (e ? 2 : 1) << endl;
    }
    return 0;
}