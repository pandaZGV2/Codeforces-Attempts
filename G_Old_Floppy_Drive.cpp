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
        int n, m;
        cin >> n >> m;
        vi a(n);
        vector<ll> prefixsum(n);
        vector<ll> prefixmax(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            prefixsum[i] = sum;
        }
        prefixmax[0] = prefixsum[0];
        for (int i = 1; i < n; i++)
        {
            prefixmax[i] = max(prefixsum[i], prefixmax[i - 1]);
        }
        ll x;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            if (sum <= 0 and x > prefixmax[n-1])
            {
                cout << -1 << " "; //not possible infinite spins.
                continue;
            }
            ll remng = x - prefixmax[n - 1] - 1; //Check what remains
            ll revs;
            if (remng < 0)
            {
                revs = 0; //Check number of revolutions |0 if x<sum| and remng/sum + 1 if x>sum
            }
            else
            {
                revs = remng / sum + 1;
            }
            //Now bin search through the prefixMAX array.
            int cnt = 0;
            int l = 0, r = n;
            int mid;
            ll y = x - revs * sum;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (y > prefixmax[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                    cnt = mid;
                }
            }
            cout << revs * n + cnt << " ";
        }
        cout << endl;
    }

    return 0;
}