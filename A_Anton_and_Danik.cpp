//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    int n; cin>>n;
    string s; cin>>s;
    int a = 0, d = 0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='A') a++;
        else d++;
    }

    if(a==d) cout<<"Friendship\n";
    else if(a>d) cout<<"Anton\n";
    else cout<<"Danik\n";
    
    return 0;
}