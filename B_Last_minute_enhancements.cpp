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
        int n;
        cin >> n;
        vi a(2 * n + 2, 0);
        vi b(2 * n + 2, 0);
        int c;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a[c - 1]++;
        }
        for (int i = 0; i < 2 * n; i++)
        {
            if (a[i] >= 1 && a[i+1]==0)
            {
                b[i] = b[i] + a[i]-1;
                b[i + 1] = b[i + 1] + 1;
            }
        }
        if(a[2*n-1]>1)
        {
            b[2*n]++;
        }
        // for (int i = 0; i < 2 * n; i++)
        // {
        //     if (b[i] > 1)
        //     {
        //         b[i + 1] = b[i + 1] + b[i] - 1;
        //     }
        // }
        // b[2 * n - 1] += a[2 * n - 1];
        int i;
        for (i = 0; i <= 2 * n; i++)
        {
            if (b[i] > 0)
            {
                s++;
            }
            cout << b[i] << " ";
        }
        cout << endl;
        for(int i=0;i<=2*n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        // if (a[i] > 1)
        //     s += 2;
        // else if (b[i] > 0)
        //     s++;
        cout << s << endl;
    }

    return 0;
}