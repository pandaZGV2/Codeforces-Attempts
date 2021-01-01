#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define modint int(1e9 + 7)
#define mod 1e9 + 7
#define loop(n) for (int i = 0; i < n; i++)
#define rep(i, a, n) for (int i = a; i < n; i++)
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define endl "\n"
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int main(void)
{
    iamspeed;
    int n, m, t;
    cin >> n >> m >> t;
    int a, b;
    int batt = n;
    int t1 = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        batt = batt - (a - t1);
        if (batt <= 0)
        {
            cout << "No\n";
            return 0;
        }
        if (batt + (b - a) >= n)
        {
            batt = n;
        }
        else
        {
            batt = batt + (b - a);
        }

        t1 = b;
    }
    // }
    // cout<<batt<<endl;
    batt = batt - (t - t1);
    // cout << batt << endl;
    if (batt <= 0)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }

    return 0;
}