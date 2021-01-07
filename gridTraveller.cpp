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
#define iamspeed cin.tie(0)->sync_with_stdio(0)
ll dp[100][100] = {0};
ll gridTraveller(ll i, ll j)
{
    if (i <= 0 || j <= 0)
    {
        return 0;
    }
    else if (i == j && i == 1)
    {
        return 1;
    }
    else if (dp[i][j] != 0)
    {
        return dp[i][j];
    }
    else
    {
        dp[i][j] = gridTraveller(i - 1, j) + gridTraveller(i, j - 1);
        return dp[i][j];
    }
}
int main(void)
{
    iamspeed;
    int n, m;
    cin >> n >> m;
    cout << gridTraveller(n, m) << endl;
    return 0;
}