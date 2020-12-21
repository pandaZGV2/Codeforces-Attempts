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
#define modint int(1e9+7)
#define mod 1e9+7
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
        int n;
        cin >> n;
        int c;
        int s1=0,s2=0;
        // for (int i = 0; i < n; i++)
        // {
            cin>>c;
            while(c>0)
            {
                s1+=c%10;
                c=c/10;
            }
            
        // }
        //cout<<s1<<" ";
        // for (int i = 0; i < n; i++)
        // {
            cin>>c;
            while(c>0)
            {
                s2+=c%10;
                c=c/10;
            }
            
        // }
        //cout<<s2<<endl;
        if (s2 > s1)
        {
            cout << "BLUE" << endl;
        }
        else if (s1 > s2)
        {
            cout << "RED" << endl;
        }
        else
        {
            cout << "EQUAL" << endl;
        }
    }
}