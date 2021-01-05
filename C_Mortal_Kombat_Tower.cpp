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
        vi a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool f = 1;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (f)
            {
                if (a[i] == 0)
                {
                    if (i < n - 1 && a[i + 1] == 0)
                    {
                        i++;
                    }
                }
                else
                {
                    cnt++;
                    if (i<n-1 && a[i+1] == 1)
                    {
                        cnt++;
                    }
                    else
                    {
                        i++;
                    }
                    
                }
                f = 0;
            }
            else
            {
                if (a[i] == 1)
                {
                    if (i < n - 1 && a[i + 1] == 1)
                    {
                        i++;
                    }
                }
                else
                {
                    if (i < n - 1 && a[i + 1] == 1)
                    {
                        i++;
                    }
                }
                f = 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}