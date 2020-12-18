#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n, a, b;
    while (t--)
    {
        cin >> a >> b >> n;
        if (n < a || n > b)
        {
            cout << n << endl;
            continue;
        }
        else
        {
            cout<<(b/n)*n+n<<endl;
            
        }
    }
    return 0;
}