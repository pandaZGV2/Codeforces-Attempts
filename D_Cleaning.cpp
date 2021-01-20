#include <bits/stdc++.h>
#define le unsigned long long
#define pii pair<le, le>
#define f first
#define s second

using namespace std;

int main()
{
    le t;
    cin >> t;
    while (t--)
    {
        le n;
        cin >> n;
        vector<le> a(n + 2, 0);
        for (le i = 0; i < n; i++)
            cin >> a[i + 1];
        bool b1 = 1, b2 = 1;
        le sum_odd = 0, sum_even = 0;
        for (le i = 1; i <= n; i++)
            if (i % 2 == 0)
                sum_odd += a[i];
            else
                sum_even += a[i];
        if (sum_odd != sum_even)
            b1 = 0;
        for (le i = 1; i <= n; i++)
            if (a[i] > a[i - 1] + a[i + 1])
                b2 = 0;
        if (b1)
        {
            if (b2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            vector<int> c(n + 2, 0);
            for (le i = 1; i <= n; i++)
                if (a[i] > a[i - 1] + a[i + 1])
                    c[i] = c[i - 1] + 1;
                else
                    c[i] = c[i - 1];
            c[n + 1] = c[n];
            bool ans = 0;
            for (le i = 1; i < n; i++)
            {
                if ((i % 2 == 0 && sum_odd - a[i] + a[i + 1] == sum_even - a[i + 1] + a[i]) || (i % 2 == 1 && sum_even - a[i] + a[i + 1] == sum_odd - a[i + 1] + a[i]))
                {
                    if (i > 1 && a[i - 1] > a[i - 2] + a[i + 1])
                        continue;
                    if (a[i + 1] > a[i - 1] + a[i])
                        continue;
                    if (a[i] > a[i + 1] + a[i + 2])
                        continue;
                    if (i < n - 1 && a[i + 2] > a[i] + a[i + 3])
                        continue;
                    if (i > 1 && c[i - 2])
                        continue;
                    if (i < n - 1 && c[n + 1] - c[i + 2])
                        continue;
                    ans = 1;
                }
            }
            if (ans)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}