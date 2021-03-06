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
#define Inf INFINITY

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
int main(void)
{
    iamspeed;
    ll n, k;
    cin >> n >> k;
    ll l, r, m;
    l = 1;
    r = n;
    m = (l + r) / 2;
    while (l + 1 < r)
    {
        m = l + (r - l) / 2;
        ll t = k;
        ll s = m;
        while (m / t > 0)
        {
            s += m / t;
            t = t * k;
        }
        if (s < n)
        {
            l = m;
        }
        // else if (s == n)
        // {
        //     break;
        // }
        else
        {
            r = m;
        }
    }
    ll t = k;
    ll s = l;
    while (l / t > 0)
    {
        s += l / t;
        t = t * k;
    }
    if (s >= n)
        cout << l << endl;
    else
    {
        cout << l + 1 << endl;
    }

    return 0;
}