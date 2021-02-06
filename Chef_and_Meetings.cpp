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
    int t;
    cin >> t;
    while (t--)
    {
        int hm, mm;
        char tm[3];
        scanf("%d:%d %s", &hm, &mm, tm);
        // cout<<hm<<" "<<mm<<endl;
        ll sm = hm * 60 + mm;
        if (strcmp(tm, "PM") == 0 && hm!=12)
        {
            sm += 12 * 60;
        }
        if (strcmp(tm, "AM") == 0 && hm == 12)
        {
            sm -= 12 * 60;
        }
        int n;
        cin >> n;
        int h, m;
        char tg[3];
        int h1, m1;
        char tg1[3];
        for (int i = 0; i < n; i++)
        {
            scanf("%d:%d %s %d:%d %s", &h, &m, tg, &h1, &m1, tg1);
            ll sg = h * 60 + m;
            if (strcmp(tg, "PM") == 0 && h != 12)
            {
                sg += 12 * 60;
            }
            if (strcmp(tg, "AM") == 0 && h == 12)
            {
                sg -= 12 * 60;
            }

            ll sg1 = h1 * 60 + m1;
            if (strcmp(tg1, "PM") == 0 && h1 != 12)
            {
                sg1 += 12 * 60;
            }
            if (strcmp(tg1, "AM") == 0 && h1 == 12)
            {
                sg1 -= 12 * 60;
            }
            if (sm >= sg and sm <= sg1)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}