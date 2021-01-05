#include <bits/stdc++.h>
using namespace std;
#define modint int(1e9 + 7)
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
void multiply(ll a[2][2], ll b[2][2])
{
    ll mul[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 2; k++)
                mul[i][j] = mul[i][j] % modint + (a[i][k] * b[k][j]) % modint;
        }
    }
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            a[i][j] = mul[i][j] % modint;
}
void mat(ll F[2][2], ll n)
{
    if (n + 2 == 1 || n + 2 == 2)
    {
        cout << 1 << endl;
        return;
    }
    ll M[2][2] = {1, 1, 1, 0};
    if (n == 1)
        return;
    mat(F, n / 2);

    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
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
        ll F[2][2] = {1, 1, 1, 0};
        mat(F, n - 2);
        cout << (F[0][0] + F[0][1])%modint << endl;
    }
}