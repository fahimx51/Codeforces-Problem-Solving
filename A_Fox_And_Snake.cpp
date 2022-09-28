#include<bits/stdc++.h>
using namespace std;

int main() {
      



      
    int n, ch, i, j;
    cin>>n>>ch;

    for(i=1; i<=n; i++){
        for(j=1; j<=ch; j++){

            if(i%2==0){

                if(i%4==0){
                    if(j==1) cout<<"#";
                    else cout<<".";
                }
                else{
                    if(j==ch) cout<<"#";
                    else cout<<".";
                }
            }
            else cout<<"#";
            
        }
        cout<<"\n";
    }
    
    return 0;
}