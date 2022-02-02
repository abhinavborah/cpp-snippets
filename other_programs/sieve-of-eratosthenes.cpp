/*
Sieve of Eratosthenes
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> prime(n+1,1);
    prime[0]=0;
    prime[1]=0;

    for(int i=2; i<=n; i++){
        if(!prime[i]){
            continue;
        }
        for(int j=2*i; j<=n; j+=i){
            prime[j]=0;
        }
    }
    cout<<"\n\n";
    for(int x=0; x<=n; x++){
        if(prime[x]){
            cout<<x;
            cout<<endl;
        }
    }

}