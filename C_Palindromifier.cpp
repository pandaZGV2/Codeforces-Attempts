#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define iamspeed                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
int main(void)
{
    iamspeed;
    string s;
    cin >> s;
    int a = s.size();
    cout << 3 << endl;
    cout << "R " << a - 1 << endl;
    cout << "L " << a << endl;
    cout << "L " << 2 << endl;
    return 0;
}