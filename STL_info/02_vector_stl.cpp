#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"\nElement at 2nd index: "<<v.at(2)<<endl;

    v.pop_back();
    cout<<"Last Element after popping: "<<v.back()<<endl;
    cout<<"First Element: "<<v.front()<<endl;

    // clearing the vector sets the size to 0 but does not reset the capacity
    cout<<"Size before clearing: "<<v.size()<<endl;
    cout<<"Capacity before clearing: "<<v.capacity()<<endl;
    v.clear();
    cout<<"Size after clearing: "<<v.size()<<endl;
    cout<<"Capacity after clearing: "<<v.capacity()<<endl;

    // different ways of initialising a vector
    vector<int> b(5,1); //creates a vector of size 5, each element initialised to 1
    cout<<"\nDifferent ways of Initialisation:"<<endl;
    for(int x:b){
        cout<<x<<'\t';
    }

    vector<int> c(7); //by default it initialises all the values to 0
    cout<<"\nDifferent ways of Initialisation:"<<endl;
    for(int x:c){
        cout<<x<<'\t';
    }

    // Copy constructor
    vector<int> test(b); //this will copy all the elements in the vector v
    cout<<"\nTo check if the copy constructor is working:"<<endl;
    for(int x:test){
        cout<<x<<'\t';
    }
}
