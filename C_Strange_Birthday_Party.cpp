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
#define modint int(1e9+7)
#define mod 1e9+7
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
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vi a; vector<pi> b;
        int c;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            a.pb(c);
        }
        for(int i=0;i<m;i++)
        {
            cin>>c;
            b.pb({c,1});
        }
        sort(a.rbegin(),a.rend());
        ll s=0;
        int check=true;
        for(int i=0;i<n;i++)
        {
            check=false;
            for(int j=i;j<a[i];j++)
            {
                if(b[j].second)
                {
                    s+=b[i].f;
                    b[i].second=0;
                    check=true;
                    break;
                }
            }
            if(!check)
            {
                s+=b[a[i]-1].f;
            }
            // cout<<s<<endl;
        }
        cout<<s<<endl;
 
    }
 
  return 0;
}