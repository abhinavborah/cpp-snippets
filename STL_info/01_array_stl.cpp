#include<iostream>
#include<array>
using namespace std;

int main(){

    int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4}; //creates an integer array of size 4

    cout<<"size of the array is: "<<a.size()<<endl; //returns the size of the array
    cout<<"The array element at index 2 is: "<<a.at(2)<<endl; //returns the element at the given index
    cout<<"1 if empty; 0 if not: "<<a.empty()<<endl; //returns a bool to check if the array is empty or not
    cout<<"The front element is: "<<a.front()<<endl; //returns the front element
    cout<<"The last element is: "<<a.back()<<endl; //returns the front element
    cout<<"\nThe elements of the array are:"<<endl;
    for(int x:a){
        cout<<x<<'\t';
    }

}