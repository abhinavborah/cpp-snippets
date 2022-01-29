// aka double ended queue i.e. pop and pop from both front and back
// not to be confused with queue<int>
// deque dont store data in a contiguous manner but rather uses a bunch of static arrays to keep track of the data
// deque is included in the queue library
#include<iostream>
#include<deque>
// #include<queue>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    d.push_back(3);
    d.push_back(4);

    for(int x:d){
        cout<<x<<'\t';
    }
    cout<<endl;

    d.pop_back();
    d.pop_front();

    for(int x:d){
        cout<<x<<'\t';
    }
    cout<<endl;
    cout<<d.at(1)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.empty()<<endl;
    // d.clear();
    d.erase(d.begin(), d.begin()+2); //clears in a range with parameters (to, from)
    cout<<d.empty()<<endl;
    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;
    
}