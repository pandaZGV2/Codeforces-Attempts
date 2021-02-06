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
#define Inf 1e7

vector<vector<int>> adj(2001, vi(2001, 0));
vector<vector<int>> dist(2001, vi(2001));
void floyd(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                dist[i][j] = 0;
            else if (adj[i][j])
                dist[i][j] = adj[i][j];
            else
                dist[i][j] = Inf;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

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
#define iamspeed                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int main(void)
{
    iamspeed;
    int n, m;
    cin >> n >> m;
    int a, b, c;
    vector<pi> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        p[i] = {a, b};
        adj[b][a] = c;
    }
    floyd(n);
    for (int i = 0; i < n; i++)
    {
        if (dist[p[i].f][p[i].s] != Inf)
            cout << dist[p[i].f][p[i].s] << endl;
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}