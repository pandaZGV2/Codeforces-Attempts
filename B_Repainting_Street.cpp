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
        int n, k;
        int c[101] = {0};
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[a[i]]++;
        }
        int max = 0;
        int maxno = 0;
        for (int i = 0; i < 100; i++)
        {
            if (c[i] >= max)
            {
                max = c[i];
                maxno = i;
            }
        }
        bool f = false;
        int s = 0;
        int smin = n;
        int i = 0;
        for (int i = 1; i <= 100; i++)
        {
            s = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == i)
                {
                    continue;
                }
                else
                {
                    s++;
                    j += k-1;
                }
            }
            if (s < smin)
                smin = s;
        }
        cout << smin << endl;
    }
    return 0;
}