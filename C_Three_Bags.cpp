#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define int long long int
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
signed main(void)
{
    iamspeed;
    int x, y, z;
    cin >> x >> y >> z;
    vi a(x), b(y), c(z);
    int min1=INT_MAX,min2=INT_MAX,min3=INT_MAX;
    int s1 = 0, s2 = 0, s3 = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
        s1 += a[i];
        if(a[i]<min1)
        min1=a[i];
    }
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
        s2 += b[i];
        if(b[i]<min2)
        min2=b[i];
    }
    for (int i = 0; i < z; i++)
    {
        cin >> c[i];
        s3 += c[i];
        if(c[i]<min3)
        min3=c[i];
    }
    cout<<s1+s2+s3-2*min(min1+min2+min3-max(min1,max(min2,min3)),min(s1,min(s2,s3)))<<endl;

    return 0;
}