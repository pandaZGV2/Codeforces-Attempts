#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int s=x+y+z;
        if (s % 9 == 0 and (x>=s/9 and y>=s/9 and z>=s/9))
        {
            printf("YES\n");
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}