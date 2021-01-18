#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define endl "\n"
#define iamspeed                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
ll calcmed(vector<ll> &a)
{
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        ans = ans + abs(a[i] - a[a.size() / 2]);
    }
    return ans;
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ll a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        int i1 = 0, i2 = n - 1;
        while (i1 <= i2)
        {
            int j1 = 0, j2 = m - 1;
            while (j1 <= j2)
            {
                vector<ll> cur_numbers = {a[i1][j1]};

                if (i1 != i2)
                    cur_numbers.push_back(a[i2][j1]);
                if (j2 != j1)
                    cur_numbers.push_back(a[i1][j2]);
                if (j2 != j1 && i1 != i2)
                    cur_numbers.push_back(a[i2][j2]);

                ans += calcmed(cur_numbers);

                j1++, j2--;
            }

            i1++, i2--;
        }
        cout << ans << endl;
    }
    return 0;
}