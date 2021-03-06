#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, s;
    cin >> t;
 
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        vector<int> v(2 * n);
        vector<int> c(2 * n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            c[i] = 0;
        }
        for (int i = 0; i < 2 * n; i++)
        {
            v[i] = 0;
            if (i < n)
            {
                c[a[i]-1]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                s = a[i] + a[j];
                v[s-2]++;
            }
        }
        int m = *max_element(c.begin(), c.end());
        cout << *max_element(v.begin(), v.end()) / (2 * m) << endl;
    }
 
    return 0;
}