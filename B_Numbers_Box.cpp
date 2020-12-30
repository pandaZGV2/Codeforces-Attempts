#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
// #define s second
// #define pb push_back
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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] <= 0)
                    cnt++;
            }
        }
        int s = 0;
        int min = INT_MAX;
        // for (int i = 0; i < n * m - 1; i++)
        // {
        //     if (a[i] >= 0 && a[i + 1] >= 0)
        //         cnt += 2;
        //     else if (a[i] < 0 && a[i + 1])
        //         cnt += -2;
        //     else
        //     {
        //         continue;
        //     }
        // }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                s += abs(a[i][j]);
                if (abs(a[i][j]) < abs(min))
                {

                    min = a[i][j];
                }
            }
        }
        if(cnt%2!=0)
        s = s - 2 * abs(min);
        cout << s << endl;
    }

    return 0;
}