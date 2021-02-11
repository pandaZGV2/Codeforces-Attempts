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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        vi b(n);
        vi c(n);
        vi pos(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[i] = a[i];
            pos[i] = i;
        }
        sort(c.begin(), c.end());
        int index = 0;
        int init = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 1; i < n; i++)
        {
            vi::iterator it = find(a.begin(), a.end(), c[i]);
            index = distance(a.begin(), it);
            it = std::find(a.begin(), a.end(), c[i - 1]);
            init = pos[distance(a.begin(), it)];
            int curr = index;
            while (curr <= init)
            {
                curr += b[index];

                cnt++;
            }
            pos[index] = curr;
        }
        cout << cnt << endl;
    }

    return 0;
}