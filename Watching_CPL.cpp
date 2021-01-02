#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define endl "\n"
typedef long long int ll;
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int c;
        vi a;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a.push_back(c);
        }
        sort(a.begin(), a.end());
        int towa = 0, towb = 0;
        int cnt = 0;
        auto it = a.end() - 1;
        for (; it >= a.begin();)
        {
            if (towa >= k)
                break;
            else
            {
                towa = towa + *(it--);
                cnt++;
            }
        }
        for (; it >= a.begin();)
        {
            if (towb >= k)
                break;
            else
            {
                towb = towb + *(it--);
                cnt++;
            }
        }
        if (towa >= k && towb >= k)
            cout << cnt << endl;
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}