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
bool cmpfunc(const pair<ll, ll> &lhs, const pair<ll, ll> &rhs)
{
    return lhs.s < rhs.s;
}
ll knap[101][(int)1e9+1] = { 0 };
int main(void)
{
    iamspeed;
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].f >> a[i].s;
    }
    sort(a.begin(), a.end(), cmpfunc);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            knap[i][j]=0;
        }

    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                knap[i][j] = 0;
            }
            else if (j - a[i].f >= 0)
            {
                knap[i][j] = max(a[i].s + knap[i-1][j - a[i].f], knap[i - 1][j]);
            }
            else
            {
                knap[i][j] = knap[i-1][j];
            }
        }
    }
    cout << knap[n][w] << endl;

    return 0;
}