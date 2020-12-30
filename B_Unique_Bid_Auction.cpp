#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

// #define f first
// #define s second
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
        vi cnt(n, 0);
        vi cnt1(n + 1, 0);
        int c;
        for (int i = 0; i < n; i++)
        {
            cin >> cnt[i];
            cnt1[cnt[i]]++;
        }
        bool f = false;
        for (int i = 0; i <= n; i++)
        {
            if (cnt1[i] == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (cnt[j] == i)
                    {
                        cout << j + 1 << endl;
                        f = true;
                        i = n;
                        break;
                    }
                }
            }
        }
        if (!f)
        {
            cout << -1 << endl;
        }

        /* code */
    }

    return 0;
}