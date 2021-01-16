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
int main(void)
{
    iamspeed;
    int n;
    cin >> n;
    ll a[n][3];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    ll dp[n][3] = {0};
    dp[0][0] = a[0][0];
    dp[0][1] = a[0][1];
    dp[0][2] = a[0][2];
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = a[i][0] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = a[i][1] + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = a[i][2] + max(dp[i - 1][1], dp[i - 1][0]);
    }
    cout << max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
    return 0;
}