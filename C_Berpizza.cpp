#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

// #define f first
// #define s second
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
    int a, b;
    set<pair<int, int>> cust, cust1;
    int s = 0;
    while (t--)
    {
        int max = 0;
        set<pair<int, int>>::reverse_iterator itmax;
        set<pi>::iterator it1;
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            s++;
            cust.insert(make_pair(s, b));
            cust1.insert(make_pair(b, s));
        }
        else if (a == 2)
        {
            it1=cust.begin();
            cout << (*it1).first << " ";
            cust1.erase({(*it1).second,(*it1).first});
            cust.erase(it1);
        }
        else if (a == 3)
        {
            itmax=cust1.rbegin();
            it1=cust1.lower_bound({(*itmax).first,-1});
            cout<<(*it1).second<<" ";
            cust.erase({(*it1).second,(*it1).first});
            cust1.erase({(*it1).first,(*it1).second});
        }
    }
    return 0;
}