#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
            continue;
        else 
            cout<<"."<<s[i];
    }
    
    return 0;
}