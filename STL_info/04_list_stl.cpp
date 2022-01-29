// doubly linked list is used in the list stl
// singly linked list is included in forward_list e.g. forward_list<int> l;
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int x:l){
        cout<<x<<"->";
    }

    cout<<endl;

    // another way of initialisation
    list<int> b(10,9); //10 list element each of value 9
    
    // copy constructor
    list<int> n(l);
    // declaration of list container
    list<int> myList{1,2,3,4,5};
    for(int x:myList){
        cout<<x<<"->";
    }
    cout<<endl;
    myList.erase(myList.begin());
    for(int x:myList){
        cout<<x<<"->";
    }
    cout<<endl;
    cout<<"size of list: "<<myList.size()<<endl;
    cout<<myList.front()<<endl;
    cout<<*(myList.end())<<endl;
    cout<<*(myList.begin())<<endl;
}