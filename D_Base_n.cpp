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
#define iamspeed                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int main(void)
{
    iamspeed;
    string s;
    ull m;
    vi sval;
    int mn = -1;
    cin >> s;
    cin >> m;
    for (int i = 0; i < s.size(); i++)
    {
        sval.pb(s[i] - '0');
        mn = max(mn, sval[i]);
    }

    mn++;
    ull l = 1;
    ull r = 10;
    ull mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        ull sum = 0;
        ull f = 1;
        for (int j = 0; j < sval.size(); j++)
        {
            sum += sval[j] * f;
            f = f * mid;
            if (sum > m)
            {
                break;
            }
        }
        if (sum > m)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l - mn << endl;

    return 0;
}