/*

std::vector::insert() is a built-in function in C++ STL which inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.

vector_name.insert (position, val)


Source: GFG
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> vector1{1,2,3,4,5};
    vector<int> vector2{6,7,8,9,10};

    // can be used to append two vectors
    vector1.insert( vector1.end(), vector2.begin(), vector2.end() );

    for(int x:vector1){
        cout<<x<<'\t';
    }

    cout<<endl<<endl;

    // it can also be used to self append the vector, i.e. dulplicate its elements
    vector2.insert( vector2.end(), vector2.begin(), vector2.end() );

    for(int x:vector2){
        cout<<x<<'\t';
    }
    
}


