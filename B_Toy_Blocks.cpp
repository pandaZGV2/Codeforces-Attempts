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
    int t;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;
        vi v(n, 0);
        long double s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s = s + v[i];
        }
        sort(v.begin(), v.end());
        int c = v.back();

        v.pop_back();
        ull ans = max(int(ceil(s / (n - 1))), c);
        ans = ans * (n - 1) - s;
        cout << ans << endl;
    }

    return 0;
}