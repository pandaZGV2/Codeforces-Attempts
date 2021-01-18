#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define recur(i, a, b) for (int i = a; i < b; i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
int power(int a, int b)
{
    if (b == 0)
        return 1;
    long long int tmp = power(a, b / 2);
    long long int result = tmp * tmp;
    if (b % 2 == 1)
        result = result * a;
    return result;
}
void intswap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
void charswap(char &a, char &b)
{
    char t = a;
    a = b;
    b = t;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << 2 << endl;
        if (n == 2)
        {
            cout << "2 1" << endl;
            continue;
        }
        cout << n-2 << " " << n << endl
             << n - 1 << " " << n - 1 << endl;
        for (int i = n - 3; i >= 1; i--)
        {
            cout << i + 2 << " " << i << endl;
        }
    }

    return 0;
}