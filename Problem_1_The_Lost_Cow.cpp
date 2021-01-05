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
    freopen("lostcow.in", "r", stdin); \
    freopen("lostcow.out", "w", stdout);
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define endl "\n"
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int main(void)
{
    iamspeed;
    //file_read
    int x, y;
    cin >> x >> y;
    bool f = true;
    int i = 1;
    int s = 0;
    int pos = x;
    while (true)
    {
        if (pos >= y)
        {
            break;
        }
        if (f)
        {
            s+=abs(pos-(x+i));
            pos = x + i;
            f = 0;
        }
        else
        {
            f = 1;
            s+=abs(pos-(x+i));
            pos = x + i;
        }
        i = i * -2;
    }
    cout<<s;

    return 0;
}