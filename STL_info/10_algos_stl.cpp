#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<int> v{1,3,6,7};

    // Binary search using stl
    cout<<binary_search(v.begin(), v.end(), 6)<<endl;

    // to get lower bound; similar method to get the upper bound
    cout<<"lower bound: "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;

    int a=3;
    int b=5;

    // to find the max/min of elements
    cout<<"Max: "<<max(a, b)<<endl;
    cout<<"Min: "<<min(a, b)<<endl;

    // to swap
    swap(a, b);
    cout<<endl<<"a: "<<a<<"\tb: "<<b<<endl;

    // to reverse
    string test="abcd";
    reverse(test.begin(), test.end());
    cout<<"Reversed string output: "<<test<<endl;

    // to rotate
    rotate(v.begin(), v.begin()+1, v.end()); //parameters are (start, pivot, end)
    cout<<"\nRotated vector: "<<endl;
    for(int x:v){
        cout<<x<<'\t';
    }

    // the stl sort function is based upon introsort (introspective sort) which is a combination of quick, heap and insertion sort 
    cout<<"\nSorted vector: "<<endl;
    sort(v.begin(), v.end());
    for(int x:v){
        cout<<x<<'\t';
    }
}