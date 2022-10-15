#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, b;
    cin >> n >> b;
    string s;
    cin >> s;

    int i, j;
    for (i = 0; i < b; i++)
    {
        for(j = 0; j < n ; j++)
        {
            if(s[j] == 'B' && s[j+1] == 'G')
            {
                s[j]= 'G';
                s[j+1] = 'B';
                j++;
            }
            else continue;
        }
    }

    cout << s << "\n";

    return 0;
}