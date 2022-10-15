#include <bits/stdc++.h>
// #include <iostream>
// #include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin>>s;

    int upper = 0, lower = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i]<=96) upper++;
        else lower++;
    }

    if(upper<=lower)  transform(s.begin(), s.end(), s.begin(), ::tolower);
    else  transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s<<"\n";
    
    return 0;
}