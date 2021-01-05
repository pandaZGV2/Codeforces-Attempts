#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
#define file_read                       \
    freopen("speeding.in", "r", stdin); \
    freopen("speeding.out", "w", stdout);
int main(void)
{
    file_read 
    int n;
    int m;
    cin >> n >> m;
    vi a(104, 0), b(104, 0);
    int mile = 1;
    int f, s;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> s;
        while (f--)
        {
            a[mile++] = s;
        }
    }
    mile = 1;
    for (int i = 0; i < m; i++)
    {
        cin >> f >> s;
        while (f--)
        {
            b[mile++] = s;
        }
    }
    int penalty = 0;
    for (int i = 1; i < 101; i++)
    {
        if (b[i] > a[i])
        {
            penalty = max(penalty, b[i] - a[i]);
        }
    }
    cout << penalty << endl;

    return 0;
}