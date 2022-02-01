// https://codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    vector<int> v(n,0);

    for(int i=0; i<n; i++) cin>>v[i];
    
    int j;

    if(v[0]==0) cout<<0;
    else if(v[p-1]==0){
        for(j=0; j<=p; j++){
            if(v[j]==0) break;
        }
        cout<<j;
    } 
    else{
        for(j=p-1; j<=n-1; j++){
            if(v[j]!=v[j+1]) break;
        }
        cout<<j+1;
    }
}