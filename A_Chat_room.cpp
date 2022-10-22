//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    string s; cin>>s;
    string main = "hello";
    int i, j=0, res = 0;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]==main[j])
        {
            res++;
            j++;

            if(res==5){
                break;
            }
        }
        else continue;
    }

    if(res==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}