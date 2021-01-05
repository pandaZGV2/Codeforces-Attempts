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
    vector<pi> a;
    int b, c;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b >> c;
        a.pb(mp(b, c));
    }
    int s = 0;
    float m = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            m = float(a[j].s - a[i].s) / (a[j].f - a[i].f);
            if (m <= 1 and m >= -1)
                s++;
        }
    }
    cout<<s<<endl;

    return 0;
}