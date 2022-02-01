/*
Contains notes I made from the video desc. provided below.

Source: YouTube

Rachit Jain
https://www.youtube.com/watch?v=g-1Cn3ccwXY
*/

#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<climits>

using namespace std;

// acts as a comparator
bool f(int a, int b){
    return a > b; // > for descending < for ascending
}

// vector stl
void vectorDemo(){
    // vector stl
    vector<int> A={11,2,3,14};
    sort(A.begin(), A.end()); //sorts in O(nlogn) time

    //2,3,11,14
    bool present=binary_search(A.begin(), A.end(), 3); //true
    bool present2=binary_search(A.begin(), A.end(), 4); //false

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123); 

    //2,3,11,14,100,100,100,100,123

    // only works when the array is sorted
    auto it=lower_bound(A.begin(), A.end(), 100); // returns the (first occurence of the element)'s index 
    vector<int>::iterator it2=upper_bound(A.begin(), A.end(), 100); // returns the (last occurence of the element +1)th index i.e. 123

    cout<<*it<<" "<<*it2<<'\n';
    cout<<it2-it<<'\n'; //4 which is the number of times 100 is occuring

    sort(A.begin(), A.end(), f); //we can do operator overloading to sort the elements in a decreasing (or a custom) order

    for(int &x:A) //iterate by reference
    {
        x++;
        cout<<x<<'\t';
    }

    cout<<'\n';
}

// set stl
void setDemo(){
    set<int> s; //maintains the ascending order of the set
    s.insert(3); //insert operation is just O(logn)
    s.insert(1);
    s.insert(-1);
    s.insert(4);
    s.insert(2);
    s.insert(5);

    s.erase(4); //erases the element from the set in O(logn) 

    for(int x:s){
        cout<<x<<'\t';
    }

    cout<<'\n';

    // 1, 2, 3, 4, 5
    auto it=s.find(2);
    it==s.end() ? cout<<"Element not present\n" : cout<<"Present\n"; 

    auto it2=s.upper_bound(-1);
    auto it3=s.lower_bound(0);
    cout<<*it2<<" "<<*it3<<'\n';

    auto it4=s.upper_bound(5);
    // if the element found, then s.end() is returned to the user
    it4==s.end() ? cout<<"Cannot be found\n" : cout<<"Found\n";;
}

// map stl
void mapDemo(){
    map<int, int> m;
    // m.insert({key,value}), m.find(key) & m.erase(key) would also take O(logn) time; insert and erase are O(1) for unordered maps
    // maps use self balancing trees whereas unordered_map uses arrays with linked lists in them
    m[0]=1;
    m[3]=5;
    m.insert({ 5, 30 });
    m[2]=0;
    // will not insert if the key,value pair is already present
    m.insert({ 5, 20 });
    m[-1]=34;
    // however one can reassign a new value to the pre-existing pair
    m[-1]=44;

    map<char,int> count;
    string x="abhinav borah";

    // this will give us the number of time a character occurs in the string x
    for(char c:x){
        count[c]++;
    }
    cout<<count['a']<<" "<<count['b']<<'\n';

}

void powerOfSTL(int point){
    /*
    [x,y]
    add[2,3]
    add[10,20]
    add[30,400]
    add[401,450]

    give me the interval 413 (sould return 401,450); the intervals added dont overlap with one another
    */

    set< pair<int, int> > p;
    p.insert({2,3});
    p.insert({10,20});
    p.insert({30,400});
    p.insert({401,450});

    // int point=50;

    auto it=p.upper_bound({point,INT_MAX});

    // for say, if point was 1 then there would be an error. to resolve this:
    if(it==p.begin()){
        cout<<"the given point is not lying on the given interval"<<'\n';
        return;
    }

    it--;

    // pair<int,int> current =*it;
    
    // if(current.first<=point && point<=current.second){
    //     cout<<"present: "<<current.first<<" "<<current.second<<'\n';
    // }
    
    if(it->first<=point && point<=it->second){
        cout<<"present: "<<it->first<<" "<<it->second<<'\n';
    }
    
    else{
        cout<<"the given point is not lying on the given interval"<<'\n';
    }


}

int main(){
    
    // performed in logn time
    powerOfSTL(50);
    powerOfSTL(1);
    powerOfSTL(400);
    powerOfSTL(401);
}