#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("foo");
    s.push("bar");
    s.push("hello");
    s.push("world");

    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;
}