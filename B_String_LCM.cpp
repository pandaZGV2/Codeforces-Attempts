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
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        string temp1=a;
        string temp2=b;
        int reqsize=lcm(a.length(),b.length());
        while(a.length()<reqsize)
        {
            a=a+temp1;
        }
        while(b.length()<reqsize)
        {
            b=b+temp2;
        }
        if (a == b)
            cout << a << endl;
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}