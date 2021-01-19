#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

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
#define iamspeed                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
ll n;
vector<bool> is_prime(1e6 + 1, 1);
void sieve()//sieve of eratosthenes
{
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i*i; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}
int main(void)
{
    iamspeed;
    n = (int)1e6;
    sieve();
    tc
    {
        int d;
        cin >> d;
        int product = 1;
        int cnt = 1;
        int curr = 1;
        while (cnt != 3)
        {
            cnt++;
            curr = curr + d;
            while (!is_prime[curr])
            {
                curr++;
            }
            product *= curr;
        }
        cout << product << endl;
    }

    return 0;
}