#include <bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long t, n, c=0, j = 0;
    cin >> t;
    while (t--)
    {   c=0;
    j=0;
        cin >> n;
        while (n > 0)
        {
            if (j == 0)
            {
                if (n % 2 == 0 && ((n/2)%2==1 || n==4))
                {
                    c = c + n / 2;
                    n /= 2;
                    j = 1;
                }
                else
                {
                    c++;
                    n--;
                    j = 1;
                }
            }
            else
            {

                if (n % 2 == 0 && ((n/2)%2==1 || n==4))
                {
                    n /= 2;
                    j = 0;
                }
                else
                {
                    n--;
                    j = 0;
                }
            }
        }
        cout << c << "\n";
    }
    
    return 0;
}
