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
    string s;
    int t;
    cin >> s;
    ll a1[26], a2[26][26];
    for (int i = 0; i < 26; i++)
    {
        a1[i] = 0;
        for (int j = 0; j < 26; j++)
        {
            a2[i][j] = 0;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        t = s[i] - 'a';
        for (int j = 0; j < 26; j++)
        {
            a2[j][t] += a1[j];
        }
        a1[t]++;
    }
    ll m = 0;
    for (int i = 0; i < 26; i++)
    {
        m = max(a1[i], m);
        for (int j = 0; j < 26; j++)
        {
            m = max(a2[i][j], m);
        }
    }
    cout << m << endl;

    return 0;
}