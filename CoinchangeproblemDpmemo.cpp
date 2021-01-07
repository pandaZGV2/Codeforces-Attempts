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
int mincoin[100] = {0};
vi coinlist;
int calc(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (mincoin[n] != 0)
    {
        return mincoin[n];
    }
    else
    {
        mincoin[n] = n;
        for (int i = 0; i < coinlist.size(); i++)
        {
            mincoin[n] = min(mincoin[n], calc(n - coinlist[i]) + 1);
        }
        return mincoin[n];
    }
}
int main(void)
{
    iamspeed;
    int n;
    coinlist.pb(1);
    coinlist.pb(3);
    coinlist.pb(4);
    cin >> n;
    cout << calc(n) << endl;


    return 0;
}