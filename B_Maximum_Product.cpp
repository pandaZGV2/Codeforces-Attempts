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
bool cmpfunc(ll lhs, ll rhs)
{
    return abs(lhs) < abs(rhs);
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        bool checkneg = true;
        ll mx = -(ll)Inf;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(a[i], mx);
            if (a[i] > 0)
            {
                checkneg = false;
            }
        }
        sort(a.begin(), a.end(), cmpfunc);
        if (checkneg)
        {
            cout << a[0] * a[1] * a[2] * a[3] * a[4] << endl;
            continue;
        }
        ll init = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
        if (init >= 0)
        {
            cout << init << endl;
        }
        else
        {
            mx = init;
            for (int i = n - 5; i < n; i++)
            {
                for (int j = 0; j < n - 5; j++)
                {
                    mx = max(mx, (init / a[i]) * a[j]);
                }
            }
            cout << mx << endl;
        }
    }

    return 0;
}