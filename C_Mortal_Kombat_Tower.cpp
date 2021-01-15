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
        int n;
        cin >> n;
        vi a(n + 4, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int turn = 0;
        int ans = 0;
        for (int i = 0; i < n;)
        {
            if (turn % 2 == 0)
            {
                if (a[i] == 1)
                {
                    ans++;
                }
                i++;
                if (a[i] == 0 && a[i + 1] == 1)
                    i++;
            }
            else
            {
                i++;
                if (a[i] == 1)
                    i++;
            }
            turn++;
        }
        cout << ans << endl;
    }
    return 0;
}