// https://codeforces.com/problemset/problem/71/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    getline(cin,str);
    while(n--){
        getline(cin,str);
        if(str.length()<=10)
            cout<<str<<endl;
        else
            cout<<str[0]<<to_string(str.length()-2)<<str[str.length()-1]<<endl;
    }
}