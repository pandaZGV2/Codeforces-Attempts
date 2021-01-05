#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

//#define f first
//#define s second
#define pb push_back
#define mp make_pair
#define modint int(1e9 + 7)
#define mod 1e9 + 7
#define loop(n) for (int i = 0; i < n; i++)
#define rep(i, a, n) for (int i = a; i < n; i++)
#define file_read                     \
    freopen("cowsignal.in", "r", stdin); \
    freopen("cowsignal.out", "w", stdout);
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define endl "\n"
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int main(void)
{
    iamspeed;
    file_read
    int n, m, k;
    cin >> n >> m >> k;
    char c;
    char a[n+1][m+1], b[k * n + 1][k * m + 1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < k * n; i += k)
    {
        for (int j = 0; j < m * k; j += k)
        {
            b[i][j] = a[i / k][j / k];
            for (int f = 0; f <k; f++)
            {
                for(int f1=0;f1<k;f1++)
                {
                    b[i+f][j+f1]=b[i][j];
                }
            }
        }
    }
    for (int i = 0; i < n*k; i++)
    {
        for (int j = 0; j < m*k; j++)
        {
            cout << b[i][j];
        }
        cout << endl;
    }

    return 0;
}