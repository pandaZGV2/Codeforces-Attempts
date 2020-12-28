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
    tc
    {
        int n, k, h;
        cin >> n >> k >> h;
        int Min = h;
        bool f = false;
        int Max = h + k;
        for (int i = 1; i < n - 1; i++)
        {
            cin >> h;
            if (h + 2 * k - 1 <= Min || h >= Max)
            {
                f = true;
            }
            Max = min(h + 2 * k - 1, Max + k - 1);
            Min = max(h, Min - k + 1);
        }
        cin >> h;
        if (h + k <= Min || Max <= h)
            f = true;

        if (f != true)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}