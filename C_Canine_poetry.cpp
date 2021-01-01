#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

// #define f first
// #define s second
// #define pb push_back
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
#define N 100007
int n;
char in[N+1];
bool used[N];

void solve()
{
    scanf("%s", in);
    n = strlen(in);

    for (int i = 1; i <= n; ++i)
        used[i] = false;

    int ans = 0;
    for (int i = 2; i <= n; ++i)
    {
        bool use_need = false;
        if (in[i] == in[i - 1] && !used[i - 1])
            use_need = true;

        if (i > 2 && in[i] == in[i - 2] && !used[i - 2])
            use_need = true;

        used[i] = use_need;
        ans += used[i];
    }

    printf("%d\n", ans);
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    int c = 0;
    while (t--)
    {
        solve();
    }

    return 0;
}