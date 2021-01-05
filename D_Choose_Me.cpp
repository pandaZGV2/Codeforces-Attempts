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
    vector<ll> m(n, 0);
    ll s1 = 0, s2 = 0;
    ll a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        s1 += a;
        m[i]=(2 * a + b);
    }
    int cnt = 0;
    sort(m.begin(), m.end());
    for (int i = n - 1; i >= 0; i--)
    {
        s2 += m[i];
        cnt++;
        if (s2 > s1)
            break;
    }
    cout << cnt << endl;

    return 0;
}