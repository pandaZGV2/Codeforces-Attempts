#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long int a1, a2;
    cin >> a1 >> a2;

    if(a2%a1==0)
    {
        cout<<a2/a1<<endl;
    }
    else
    {
        cout<<a2/a1+1;
    }
    
    return 0;
}