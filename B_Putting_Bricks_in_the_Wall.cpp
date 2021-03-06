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
        char a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                // cout << a[i][j];
            }
            //cout<<endl;
        }
        int c1 = 0, c2 = 0;
        vector<pi> s1, s2;
        if (a[0][1] == '1')
        {
            c2++;
            s2.pb({1, 2});
        }
        else
        {
            c1++;
            s1.pb({1, 2});
        }
        if (a[1][0] == '1')
        {
            c2++;
            s2.pb({2, 1});
        }
        else
        {
            c1++;
            s1.pb({2, 1});
        }
        if (a[n - 1][n - 2] == '0')
        {
            c2++;
            s2.pb({n, n - 1});
        }
        else
        {
            c1++;
            s1.pb({n, n - 1});
        }
        if (a[n - 2][n - 1] == '0')
        {
            c2++;
            s2.pb({n - 1, n});
        }
        else
        {
            c1++;
            s1.pb({n - 1, n});
        }
        if (s1.size() < s2.size())
        {
            cout<<s1.size()<<endl;
            for (auto i : s1)
            {
                cout << i.f << " " << i.s << endl;
            }
        }
        else
        {
            cout<<s2.size()<<endl;
            for (auto i : s2)
            {
                cout << i.f << " " << i.s << endl;
            }
        }
    }

    return 0;
}