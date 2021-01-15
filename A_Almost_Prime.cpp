#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
#define endl "\n"
#define iamspeed cin.tie(0)->sync_with_stdio(0)
bool isprime[3001] = {0};
vi prime(3001, 0);
int main(void)
{
    iamspeed;
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isprime[i] == 0)
            for (int j = i * i; j <= n; j += i)
            {
                isprime[j] = 1;
            }
    }
    int cnt = 0;
    int total = 0;
    for (int j = 2; j <= n; j++)
    {
        cnt = 0;
        for (int i = 2; i <= j; i++)
        {
            if (isprime[i] == 0 && j % i == 0)
            {
                cnt++;
            }
        }
        if (cnt == 2)
        {
            total++;
        }
    }
    cout << total << endl;

    return 0;
}