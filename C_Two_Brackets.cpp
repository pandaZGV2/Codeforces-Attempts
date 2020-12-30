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
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> c1, c2;
        c1.push(0);
        int s1 = 0;
        c2.push(0);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == ')')
            {
                if (s[i] == '(')
                {
                    c1.push(s[i]);
                }
                else if (s[i] == ')' and c1.top() == '(')
                {
                    c1.pop();
                    s1++;
                }
                else
                {
                    c1.push(s[i]);
                }
            }

            else
            {
                if (s[i] == '[')
                {
                    c2.push(s[i]);
                }
                else if (s[i] == ']' and c2.top() == '[')
                {
                    c2.pop();
                    s1++;
                }
                else
                {
                    c2.push(s[i]);
                }
                /* code */
            }
        }
        cout << s1 << endl;
    }
    return 0;
}