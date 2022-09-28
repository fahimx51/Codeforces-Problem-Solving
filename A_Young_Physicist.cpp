#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n][3], i, j, sum = 0;
    bool result = true;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = sum + arr[j][i];
        }

        if (sum != 0)
        {
            result = false;
            break;
        }
    }

    if (result)
        cout << "YES\n";
    else
        cout << "NO\n";
}
