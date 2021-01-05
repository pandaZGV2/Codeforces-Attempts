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
vi x;
void test(int n)
{
    ll s1,s2,px=0;
    min
    for(int i=0;i<n;i++)
    {
        if(x[px]==i)
        {
            s1+=a[x[px]];
            px++;
        }
        else
        {
            s2+=a[i];
        }
        
        
    }
}
void solve(ll i,int n)
{
    if(i==n)
    {
        test(n);
        return;
    }
    x.pb((i));
    solve(i+1);
    x.pop_back();
}
int main(void)
{
    iamspeed;
    int n;
    cin>>n;
    vi a(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

  return 0;
}