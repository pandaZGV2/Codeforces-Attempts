#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

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
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll n1;
        n1 = n;
        int f = 1;
        int r;
        while (n > 0)
        {
            r = n % 10;
            if (r != 0)
            {
                f = lcm(f, r);
            }
            n = n / 10;
        }
        while (n1 % f != 0)
        {
            n1++;
            n = n1;
            f = 1;
            while (n > 0)
            {
                r = n % 10;
                if (r != 0)
                {
                    f = lcm(f, r);
                }
                n = n / 10;
            }
        }
        cout << n1 << endl;
    }

    return 0;
}