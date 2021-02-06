#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int binwhile(int a, ll b, int modint)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1 == 1)
        {
            res = (res * a)%modint;
        }
        a = (a * a)%modint;
        b >>= 1;
    }
    return res;
}
int main(void)
{
    int z;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        ll y;
        cin >> x >> y;
        cout << binwhile(x % 10, y, 10) << endl;
    }
    cin >> z;
    return 0;
}