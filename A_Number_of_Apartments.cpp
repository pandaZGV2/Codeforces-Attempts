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
        int n;
        cin >> n;
        bool f = 0;
        int i = 0, j = 0, k = 0;
        for (i = 0; i <= ceil(n / 7.0); i++)
        {
            j = 0, k = 0;
            for (j = 0; j <= ceil(n / 5.0); j++)
            {
                k = 0;
                for (k = 0; k <= ceil(n / 3.0); k++)
                {
                    if ((3 * k + 5 * j + 7 * i) == n)
                    {
                        f = true;
                        cout << k << " " << j << " " << i << endl;
                        goto L1;
                    }
                }
            }
        }
    L1:;
        if (f)
        {
            ;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}