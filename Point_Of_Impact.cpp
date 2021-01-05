#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define endl "\n"
#define iamspeed cin.tie(0)->sync_with_stdio(0)
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, y;
        pi a, b, c, d;
        cin >> n >> k >> x >> y;
        //     if (x != 0 && y != 0)
        //     {

        //         k += 3;
        //     }
        //     else
        //     {
        //         a = {x, y};
        //         b = {x + min(n - x, n - y), y + min(n - x, n - y)};
        //         d = {y, x};
        //         c = {y - min(n - x, n - y), x - min(n - x, n - y)};
        //     }
        //     int f = k % 4;
        //     if ((a.f == n || a.f == 0) && (a.s == n || a.s == 0))
        //     {
        //         cout << a.f << " " << a.s << endl;
        //     }
        //     else if (f == 0)
        //     {
        //         cout << a.f << " " << a.s << endl;
        //     }
        //     else if ((b.f == n || b.f == 0) && (b.s == n || b.s == 0))
        //     {
        //         cout << b.f << " " << b.s << endl;
        //     }
        //     else if (f == 1)
        //     {
        //         cout << b.f << " " << b.s << endl;
        //     }
        //     else if ((c.f == n || c.f == 0) && (c.s == n || c.s == 0))
        //     {
        //         cout << c.f << " " << c.s << endl;
        //     }
        //     else if (f == 2)
        //     {
        //         cout << c.f << " " << c.s << endl;
        //     }
        //     else if ((d.f == n || d.f == 0) && (d.s == n || d.s == 0))
        //     {
        //         cout << d.f << " " << d.s << endl;
        //     }
        //     else if (f == 3)
        //     {
        //         cout << d.f << " " << d.s << endl;
        //     }
        // }
        if (x == y)
        {
            cout << n << " " << n << endl;
            continue;
        }
        else if(x>y)
        {
            a={n,y+n-x};
            b={a.s,a.f};
            d={a.f-a.s,0};
            c={d.s,d.f};
        }
        else
        {
            a={x+n-y,n};
            b={a.s,a.f};
            d={0,a.s-a.f};
            c={d.s,d.f};
        }
        int f=(k+3)%4;
        if(f==0)
        {
            cout<<a.f<<" "<<a.s<<endl;
        }
        else if(f==1)
        {
            cout<<b.f<<" "<<b.s<<endl;
        }
        else if(f==2)
        {
            cout<<c.f<<" "<<c.s<<endl;
        }
        else if(f==3)
        {
            cout<<d.f<<" "<<d.s<<endl;
        }
    }

    return 0;
}