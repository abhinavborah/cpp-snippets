/*
Sources:

Q: https://codeforces.com/contest/808/problem/D
A: https://www.youtube.com/watch?v=qOHXdhtxyyQ
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n+5, 0);
    long long S=0; //total sum of the array
    for(int i=0; i<n; i++) cin>>v[i], S+=v[i];
    if(S&1){ //if the total sum was odd then it wont be possible
        cout<<"NO";
        return 0;
    }


    unordered_map<long long, int> first, second;

    first[v[0]]=1; //first half elements

    for(int i=1; i<n; i++) second[v[i]]++; //second half elements

    long long int sdash=0; //sum of the first i numbers

    for(int i=0; i<n; i++){
        sdash+=v[i]; //first i numbers
        if(sdash==S/2){
            cout<<"YES";
            return 0;
        }
        if(sdash < S/2){
            long long x= S/2 - sdash;
            // delete element from second half, and insert into first half
            if(second[x]>0){
                cout<<"YES";
                return 0;
            }
        }
        else{
            long long y=sdash - S/2;
            if(first[y]>0){
                cout<<"YES";
                return 0;
            }
        }
        first[v[i+1]]++; //element is inserted in the first part
        second[v[i+1]]--; //element is deleted from the second part

    }
    cout<<"NO";
    return 0;
}