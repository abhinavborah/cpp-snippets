// in set only the unique elements are stored
// behind the scenes, a Binary Search Tree(BST) is used
// hence by default, a set is always sorted in ascending order
#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;
    // insert, find, erase and count: complexity: O(logn)
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(int x:s){
        cout<<x<<'\t';
    }
    cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(int x:s){
        cout<<x<<'\t';
    }

    cout<<endl;
    // the following will return a bool
    cout<<s.count(5)<<endl; //to check if an element is present or not; in this case, 5
    cout<<s.count(-1)<<endl; //to check if an element is present or not; in this case, -1

    set<int>::iterator itr=s.find(5); //returns an iterator
    cout<<"Value present at itr: "<<*itr<<endl;

    // size, begin, end, empty: O(1)

}