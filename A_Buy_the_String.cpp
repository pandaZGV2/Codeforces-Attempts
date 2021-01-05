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
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        int c;
        vi a(n, 0);
        int s1 = 0, s0 = 0;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i]-'0')
                s1++;
            else
            {
                s0++;
            }
        }
        //cout<<s1<<" "<<s0<<endl;
        int origsum = s1 * c1 + s0 * c0;
        int cost0=0,cost1=0;
        if (c0 > c1)
        {
            s1 = s1 + s0;
            cost1=s1*c1+s0*h;
        }
        else if (c0 < c1)
        {
            s0=s0+s1;
            cost0=s0*c0+h*s1;
        }
        else
        {
            cost0=cost1=s0*c0+s1*c1;
        }
        
        cout<<min(max(cost0,cost1),origsum)<<endl;
    }
    return 0;
}