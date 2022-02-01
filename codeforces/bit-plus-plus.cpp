// https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int result=0;
    string str;
    getline(cin,str);
    while(n--){
        getline(cin,str);
        if(str[1]=='-'){
            result--;
        }
        if(str[1]=='+'){
            result++;
        } 
    }
    cout<<result;
}