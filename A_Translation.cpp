#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1, s2;
    cin>>s1>>s2;

    reverse(s2.begin(), s2.end());
    
    
    if(s1==s2) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}