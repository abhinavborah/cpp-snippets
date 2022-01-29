// queue uses a deque as a base

#include<iostream>
#include<queue>
#include<list>
using namespace std;

int main(){
    queue<string, list<string>> q; //we can set a custom base; in this case, a list. By default the value is deque

    q.push("hello");
    q.push("world");
    q.push("ahaha");

    cout<<"First element: "<<q.front()<<endl;
}