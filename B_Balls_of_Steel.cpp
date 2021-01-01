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
        int n, k;
        int x, y;
        cin >> n >> k;
        int s = 0;
        map<int, pair<int, int>> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            a.insert({i, make_pair(x, y)});
        }
        int f = false;
        int cnt=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                c=max(c,abs(a[i].first-a[j].first)+abs(a[i].second-a[j].second));
            }
            if(c<=k)
            {
                f=true;
                break;
            }
            else
            {
                f=false;
            }
        }
        if(f)
        cout<<1<<endl;
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}