//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    int l, b; cin>>l>>b;

    int c = 0;

    while(l<=b){
        c++;
        l = l*3;
        b = b*2;
    }

    cout<<c<<endl;
    
    return 0;
}