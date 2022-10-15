// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    string s; cin>>s;
    int i, j;
    
    for(i=0; i<s.size(); i=i+2){
        for(j=0; j<s.size()-1; j=j+2){
            if(s[j]>s[j+2])
                swap(s[j], s[j+2]);
            else continue;
        }
    }

    cout<<s<<endl;
    
    return 0;
}