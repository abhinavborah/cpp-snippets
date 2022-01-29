// by default it is a max heap
//// implementation is done using a complete binary tree (CBT) i.e. all levels should be filled (except last level); filling is done from left to right order
//// heap property is that the parent must be greater than its children
// binary tree representation of a heap is not an ideal one as insertion will involve looking for elements in O(n) time let alone replacing and then switching; rather arrays should be used
// a CBT can be flattened into an array, as it follows the property: if parent is 'i' then the children are '2i' and '2i+1'
// tl;dr heap is represented by a CBT but is stored in the memory as an array

#include<iostream>
#include<queue>

using namespace std;
int main(){
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n=maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<'\t';
        maxi.pop();
    }
    cout<<endl;

    // testing min heap
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(4);

    int m=mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<'\t';
        mini.pop();
    }
    cout<<endl;
}
