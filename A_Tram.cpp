// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;
    int temp = t;
    int demo = 0;

    while (t--)
    {
        int x, y, res;

        if(t<temp-1)
        {
            cin>>x>>y;
            res = res - x;
            res = res + y;

            if(res > demo) demo = res;
        }
        else
        {
            cin>>x>>y;
            res = x+y;
            demo = res;
        }
    }

    cout<<demo<<endl;
    return 0;
}