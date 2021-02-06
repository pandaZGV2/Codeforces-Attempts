#include <bits/stdc++.h>

using namespace std;


int main(void)
{
    int h, w;
    cin >> h >> w;
    char a[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }
    // for (int i = 0; i < h; i++)
    // {
    //     for (int j = 0; j < w; j++)
    //     {
    //         cout << a[i];
    //     }
    //     cout<<endl;
    // }
    int cnt = 0;
    for (int i = 1; i < h - 1; i++)
    {
        for (int j = 1; j < w - 1; j++)
        {
            if (a[i][j] != '#')
                continue;
            else
            {
                if (a[i - 1][j] == '.' && a[i][j + 1] == '.')
                    cnt++;
                if (a[i + 1][j] == '.' && a[i][j + 1] == '.')
                    cnt++;
                if (a[i - 1][j] == '.' && a[i][j - 1] == '.')
                    cnt++;
                if (a[i + 1][j] == '.' && a[i][j - 1] == '.')
                    cnt++;
                if (a[i - 1][j] == '#' && a[i][j - 1] == '#' && a[i - 1][j - 1] == '.')
                    cnt++;
                if (a[i - 1][j] == '#' && a[i][j + 1] == '#' && a[i - 1][j + 1] == '.')
                    cnt++;
                if (a[i + 1][j] == '#' && a[i][j - 1] == '#' && a[i + 1][j - 1] == '.')
                    cnt++;
                if (a[i + 1][j] == '#' && a[i][j + 1] == '#' && a[i + 1][j + 1] == '.')
                    cnt++;
            }
        }
    }
    cout<<cnt<<"\n";

    return 0;
}