#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n > 0)
        cout << abs(n) << "\n";
    else
    {
        int a, b;
        a = n / 10;
        b = n / 100 * 10 + n % 10;
        cout << max(a, b) << "\n";
    }

    return 0;
}