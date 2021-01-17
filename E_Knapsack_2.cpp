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
#define Inf (ll) INFINITY

// =============================Graph Agorithms==================================
// vector<bool> visited;

// void dfs(int v)
// {
//     visited[v] = true;
//     for (int u : adj[v])
//     {
//         if (!visited[u])
//             dfs(u);
//     }
// }
// vector<vector<int>> adj; // adjacency list representation
// int n;                   // number of nodes
// int s;                   // source vertex

// queue<int> q;
// vector<bool> used(n);
// vector<int> d(n), p(n);

// q.push(s);
// used[s] = true;
// p[s] = -1;
// while (!q.empty())
// {
//     int v = q.front();
//     q.pop();
//     for (int u : adj[v])
//     {
//         if (!used[u])
//         {
//             used[u] = true;
//             q.push(u);
//             d[u] = d[v] + 1;
//             p[u] = v;
//         }
//     }
// }

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
bool cmpfunc(const pair<ll, ll> &lhs, const pair<ll, ll> &rhs)
{
    return lhs.f < rhs.f;
}
ll knap[101][(int)1e6 + 1000];
int main(void)
{
    iamspeed;
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> a(n + 1);
    ll s = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].f >> a[i].s;
        s += a[i].s;
    }
    //sort(a.begin(), a.end(), cmpfunc);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            knap[i][j] = Inf;
        }
    }
    knap[1][0] = 0;
    knap[1][a[1].s] = a[1].f;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            // if (knap[i][j] == Inf)
            // {
            //     continue;
            // }
            if (j - a[i].s >= 0 && knap[i - 1][j - a[i].s] != Inf)
            {
                knap[i][j] = min(a[i].f + knap[i - 1][j - a[i].s], knap[i][j]);
            }
            knap[i][j] = min(knap[i][j], knap[i - 1][j]);
        }
    }

    for (int j = s; j >= 0; j--)
    {
        if (knap[n][j] <= w)
        {
            cout << j;
            return 0;
        }
    }

    return 0;
}