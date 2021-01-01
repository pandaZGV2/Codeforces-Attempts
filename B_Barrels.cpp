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
        ull n, k;
        cin >> n >> k;
        vector<ull> a;
        ull c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a.pb(c);
        }
        sort(a.begin(), a.end());
        for (int i = 1; i <= k; i++)
        {
            if (n - 1 - i >= 0)
                a[n - 1] += a[n - 1 - i];
            else
            {
                break;
            }
        }
        cout << a[n - 1] << endl;
    }
    return 0;
}