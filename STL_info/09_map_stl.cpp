// maps store a key:value pair; every key is unique and points to a unique pair
// by default the keys are sorted unlike in unsorted maps

// insert, erase, find and count: O(logn) not O(1) as map here is implemented using balanced trees aka red-black trees
// implementation of unordered map is done using hash table, there the complexity is O(1)

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1]="test";
    m[13]="here";
    m[2]="string";

    // another way of inserting
    m.insert({5,"nice"});
    m.insert(make_pair(6,"lmao"));

    cout<<"before erase: "<<endl;
    for(auto x:m){
        cout<<x.first<<'\t'<<x.second<<endl;
    }

    cout<<"finding 13: "<<m.count(13)<<endl;

    m.erase(13);
    cout<<endl;
    cout<<"after erase: "<<endl;
    for(auto x:m){
        cout<<x.first<<'\t'<<x.second<<endl;
    }
}