// https://codeforces.com/problemset/problem/4/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(!(n&1) and n>2){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}