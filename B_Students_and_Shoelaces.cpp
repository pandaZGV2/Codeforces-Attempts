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
    int n, m;
    cin >> n >> m;
    int a, b;
    vector<int> adj[200];
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    bool f = true;
    while (f)
    {
        f = false;
        vi list;
        for (int i = 1; i <= n; i++)
        {
            if (adj[i].size() == 1)
            {
                f = true;
                list.pb(i);
            }
        }
        if (f)
        {
            for (auto i : list)
            {
                adj[adj[i][0]].erase(remove(adj[adj[i][0]].begin(), adj[adj[i][0]].end(), i), adj[adj[i][0]].end());
                adj[i].pop_back();
                // cout << i << " ";
            }
            // cout << endl;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}