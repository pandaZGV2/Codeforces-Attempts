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
    tc
    {
        int n; long double x;
        cin>>n>>x;
        vi a(n,0);
        ull s1=0,s2=0;
        ull s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            s1+=ceil(a[i]/x);
        }
        s2=ceil(s/x);
        cout<<s2<<" "<<s1<<endl;
    }

  return 0;
}