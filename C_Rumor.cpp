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
bool visited[100001] = {0};
vector<ll> edges[100001];
ll mini;
void dfs(ll i, std::vector<ll> &v1)
{
    mini = min(mini, v1[i]);
    visited[i] = true;
    for (auto b : edges[i])
    {
        if (!visited[b])
        {
            dfs(b, v1);
        }
    }
}
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int main(void)
{
    iamspeed;
    int n, m;
    cin >> n >> m;
    vector<ll> cost(100005);
    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        edges[a].pb(b);
        edges[b].pb(a);
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        mini = 0;
        if (!visited[i])
        {
            mini = cost[i];
            dfs(i, cost);
            ans += mini;
        }
    }
    cout << ans << endl;

    return 0;
}