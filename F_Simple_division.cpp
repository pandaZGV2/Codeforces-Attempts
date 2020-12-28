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
    int m;
    do
    {
        vi v;
        int min = INT_MAX;
        int c;
        cin >> c;
        m = c;
        while (c != 0)
        {
            v.pb(c);
            if (min > c)
                min = c;
            cin >> c;
        }
        int dmax = 1;
        if (m != 0)
        {
            for (int i = 2; i <= abs(min) + 1; i++)
            {
                bool f1 = false;
                int r = ((v[0] % i) + i) % i;
                for (int j = 1; j < v.size(); j++)
                {
                    if (((v[j] % i) + i) % i == r)
                    {
                        f1 = true;
                    }
                    else
                    {
                        f1 = false;
                        break;
                    }
                }
                if (f1)
                {
                    dmax = i;
                }
            }
            cout << dmax << endl;
        }
    } while (m != 0);

    return 0;
}