//#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    ll n; cin>>n;
    ll temp, c=0;

    while(n>0){
        temp = n%10;
        if(temp==4 || temp==7) c++;

        n /= 10;        
    }

    if(c==4 || c==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    // cout<<"C is "<<c<<endl;
    
    
    return 0;
}