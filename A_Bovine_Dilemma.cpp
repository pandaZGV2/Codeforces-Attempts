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
double findArea(double a, double b, double c)
{
    return (1.0/2)*(abs(b-a))*c;
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<double> cnt;
        int a[n];
        double f = 0;
        int c;
        float s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                f = findArea(double(a[i]), double(a[j]), 1.0);
                // cout<<f<<endl;
                if (find(cnt.begin(), cnt.end(), f) == cnt.end())
                {
                    cnt.pb(f);
                }
            }
        }
        cout << cnt.size() << endl;
    }
    return 0;
}