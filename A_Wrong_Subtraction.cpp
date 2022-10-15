//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n, c, temp;
    cin >> n >> c;

    while (c--)
    {
        temp = n % 10;

        if (temp == 0)
            n = n / 10;
        else
            n--;
    }

    cout << n << endl;

    return 0;
}