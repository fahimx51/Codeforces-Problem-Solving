#include<bits/stdc++.h>
typedef long long ll;
using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t; cin>>t;
    while(t--){
       int n; cin>>n;
       int ar[n], arra[100000]={0};

       for(int i=0; i<n; i++){
            cin>>ar[i];
       }

       for(int i=0; i<n; i++){
            arra[ar[i]]++;
       }

       int k = 0;

       for(int i=0; i<100000; i++){

            if(arra[i]>k) k = arra[i];
            
       }

       cout<<n-k<<"\n";

    }
    return 0;
}