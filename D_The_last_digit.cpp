#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

long long binpow(long long a, long long b, long long m)
{
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2, m);
    if (b % 2)
        return (res % m * res % m * a % m) % m;
    else
        return (res % m * res % m) % m;
}
int main(void)
{
    int z;
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        cout << binpow(x, y, 10) << endl;
    }
    cin >> z;
    return 0;
}