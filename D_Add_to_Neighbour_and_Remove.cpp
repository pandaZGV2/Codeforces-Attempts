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
void solve(int n)
{
    int a[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    int cursum = 0;
    bool f;
    int i;
    for (i = n; i >= 1; i--)
    {
        cursum = 0;
        int each = s / i;
        if (s % i == 0)
        {
            f = true;
            for (int j = 0; j < n; j++)
            {
                cursum += a[j];
                if (cursum > each)
                {
                    f = false;
                    break;
                }
                else if (cursum == each)
                {
                    f = true;
                    cursum = 0;
                }
            }
            if (f == true)
            {
                cout << n - i << endl;
                return;
            }
        }
    }
}
int main(void)
{
    iamspeed;
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }

    return 0;
}