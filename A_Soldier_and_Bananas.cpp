//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    int k, n, w; cin>>k>>n>>w;
    int i, sum = 0;

    for(i=1; i<=w; i++){
        sum += k*i;
    }

    cout<<max(sum-n, 0)<<endl;
    
    return 0;
}