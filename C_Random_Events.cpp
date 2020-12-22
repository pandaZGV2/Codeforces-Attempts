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
        int a[n];
        double p=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int pos=n;
        int i;
        for(i=n;i>=1;i--)
        {
            if(a[i-1]!=i)
            {
                pos=i;
                break;
            }

        }
        if(i==0)
        {
            p=0;
        }

        int a1;
        double f=1;
        for(int i=1;i<=m;i++)
        {
            cin>>a1>>f;
            if(a1<pos)
            {
                continue;
            }
            else
            {
                p=p*(1-f);
            }
        }
        printf("%.6lf\n",1-p);
        
    }

    return 0;
}