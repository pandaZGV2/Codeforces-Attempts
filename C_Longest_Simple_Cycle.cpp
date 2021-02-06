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
// int n;
// vector<vector<int, int>>
// ;

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
#define make_tuple mt
int main(void)
{
    iamspeed;
    tc
    {
        int n;
        cin >> n;
        vector<ll> c(n), a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > a[i])
                swap(a[i], b[i]);
        }
        ll curr = c[n - 1] - 1;
        ll highest = -(ll)Inf;
        for (int i = n - 2; i >= 0; i--)
        {
            curr += 2;
            if (a[i + 1] == b[i + 1])
            {
                highest = max(highest, curr);
                curr = c[i] - 1;
            }
            else
            {
                ll q = a[i + 1] - b[i + 1];
                highest = max(highest, curr + q);
                q = c[i] - 1 - q;
                curr += q;
                curr = max(curr, c[i] - 1);
            }
        }
        cout << highest << endl;
    }

    return 0;
}