// https://codeforces.com/problemset/problem/231/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a,b,c;
    int count=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if((a+b+c)>1){
            count++;
        }
    }
    cout<<count<<endl;
}