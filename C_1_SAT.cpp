#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define iamspeed cin.tie(0)->sync_with_stdio(0)
bool f1 = false;
bool comparestr(const string &lhs, const string &rhs)
{
    if (lhs == rhs && !f1)
    {
        cout << lhs << " ";
        f1 = true;
    }
    return lhs > rhs;
}

int main(void)
{
    iamspeed;
    vector<string> s;
    string s1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        s.pb(s1);
    }
    sort(s.begin(),s.end());
    set<string> h;
    for (int i = 0; i < n; i++)
    {
        if (s[i].front() == '!')
            h.insert(s[i].substr(1, s[i].size() - 1));
        else
        {
            if (h.count(s[i]))
            {
                cout << s[i] << '\n';
                return 0;
            }
        }
    }
    cout << "satisfiable";

    return 0;
}