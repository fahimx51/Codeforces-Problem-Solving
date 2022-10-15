#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t; cin>>t;
    while(t--){
    int result = 0;
    ll n, temp=0; cin>>n;

    // if(n%2!=0) result = 10;
    // else{
    //     for(ll i=3 ; i<=n ; i+=2){
    //         if(n%i==0){
    //             result = 10;
    //             break;
    //         }
    //         else continue;
    //         }
    //     }
        

        // if(result==10) cout<<"YES\n";
        // else cout<<"NO\n";

    temp = n&(n-1);

    if(temp==0) cout<<"NO\n";
    else cout<<"YES\n";

    }
    
    return 0;
}