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
ull gcd(ull a, ull b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main(void)
{
    iamspeed;

    ull n, m, g;
    cin >> n >> m;
    ull a[n], b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n > 1)
    {
        g = a[1] - a[0];
        for (int i = 1; i < n; i++)
        {
            g = gcd(a[i] - a[0], g);
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            cin >> b;
            cout << a[0] + b << " ";
        }
        return 0;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b;
        cout << gcd(a[0] + b, g) << " ";
    }

    return 0;
}