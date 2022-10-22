#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int exist(string s, vector<string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == s)
            return i;
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> v;

    int t;
    cin >> t;
    int temp = t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;

        if (t == temp - 1)
        {
            v.push_back(x);
            v.push_back(y);
        }

        else
        {
            int res1 = exist(x, v);
            // cout<<"res1 = "<<res1<<endl;

            if (res1 >= 0)
                replace(v.begin(), v.end(), x, y);
            else
                v.push_back(x);

            int res2 = exist(y, v);
            // cout<<"res2 = "<<res2<<endl;

            if (res2 >= 0)
                replace(v.begin(), v.end(), x, y);
                
            else
                v.push_back(y);
        }
    }

    for(int i=0; i<v.size(); i+=2)
    {
        cout<<v[i]<<" "<<v[i+1]<<"\n";
    }
    return 0;
}