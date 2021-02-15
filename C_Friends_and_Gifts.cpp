#include <bits/stdc++.h>
using namespace std;
int a[200006];
int indeg[2000006];
void dfs(int &s)
{
    while (a[s])
        s = a[s];
}
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        indeg[a[i]]++;
    }
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
            v.push_back(i);
    }
    v.push_back(v[0]);
    for (int i = 0; i < v.size() - 1; i++)
    {
        dfs(v[i]);
        a[v[i]] = v[i + 1];
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}