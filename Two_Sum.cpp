#include<iostream>
using namespace std;

int main() {
    

    
    cout<<"Enter array size : ";
    int n; cin>>n;
    int arr[n];
    int i, j, first, last;

    cout<<"Enter the array : ";

    for(i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Enter key value : ";
    int key; cin>>key;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i]+arr[j]==key){
                last = i;
                first = j;
                break;
            }
        }
    }

    cout<<first<<" and "<<last<<" index\n";
    
    
    return 0;
}