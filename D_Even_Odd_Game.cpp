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
    tc
    {
        int n;
        cin >> n;
        vi a;
        int c;
        ll s = 0;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            a.pb(c);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && a[i]%2==0)
            {
                s+=a[i];
            }
            else if(i%2==1 && a[i]%2==1)
            {
                s-=a[i];
            }
        }
        if(s>0)
        {
            cout<<"Alice\n";
        }
        else if(s<0)
        {
            cout<<"Bob\n";
        }
        else
        {
            cout<<"Tie\n";
        }
        
        
    }

    return 0;
}