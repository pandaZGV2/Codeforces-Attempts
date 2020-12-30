#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long int ull;
typedef long int li;
typedef vector<int> vi;
typedef pair<int, int> pi;

// #define f first
// #define s second
// #define pb push_back
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
bool isPalindrome(string s)
{
    int l = 0;
    int h = s.size() - 1;
    while (h > l)
    {
        if (s[l++] != s[h--])
        {
            return false;
        }
    }
    return true;
}
void subString(string s, int n, int &c)
{
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            string s1;
            int j = i + len - 1;
            int k;
            for (k = i; k <= j; k++)
            {
                s1 += s[k];
            }
            if (isPalindrome(s1))
            {
                for (char f = 'a'; f <= 'z'; f++)
                {
                    string s2;
                    s2+=f;
                    if (s1.find(s2) != string::npos)
                    {
                        s[(i + j) / 2] = f;
                    }
                }
                c++;
            }
        }
    }
}
int main(void)
{
    iamspeed;
    int t;
    cin >> t;
    int c = 0;
    while (t--)
    {
        string s;
        c = 0;
        cin >> s;
        // if(s.size()>=3)
        subString(s, s.size(), c);
        // else if(s.size()==2)
        // {
        //     if(s[0]==s[1])
        //     c++;
        // }

        cout << c << endl;
    }

    return 0;
}