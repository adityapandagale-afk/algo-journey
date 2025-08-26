#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,2,3,5,5,5,6};
    unordered_map<int,int> freq;
    int n=8;
    if(arr[0]==arr[n-1])cout<<0;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;

    }
    int ans=0;
    int max=0;
    int m2=max;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            m2=max;
            max=arr[i];
        }
        else if(arr[i]>m2){
            m2=arr[i];
            ans=freq[arr[i]];
        }
        
        
    }

    cout<<ans;
    
    
}