#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
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
        int n;
        cin >> n;
        unsigned long long int s=0,s1 = 0, s2 = 0;
        int a[n], b[n], c[n];
        loop(n)
        {
            cin >> a[i];
            if (i % 2 == 0)
            {
                b[i] = 1;
                c[i] = a[i];
            }
            else
            {
                c[i] = 1;
                b[i] = a[i];
            }
            s+=a[i];
            s1+=abs(a[i]-b[i]);
            s2+=abs(a[i]-c[i]);
        }
        if(2*s1<=s)
        {
            loop(n)
            cout<<b[i]<<" ";
        }
        else if(2*s2<=s)
        {
            loop(n)
            cout<<c[i]<<" ";
        }
        cout<<endl;
        

    }
}