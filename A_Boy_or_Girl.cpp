#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin>>str;

    set <char> st;
    for(int i=0; i<str.size(); i++){
        st.insert(str[i]);
    }
    
    int res = st.size();

    if(res%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    
    return 0;
}