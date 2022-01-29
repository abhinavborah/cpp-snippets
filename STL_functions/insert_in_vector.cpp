/*

std::vector::insert() is a built-in function in C++ STL which inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.

vector_name.insert (position, val)


Source: GFG
*/

#include<iostream>
#include<vector>

using namespace std;

/* 
LeetCode: 

1929. Concatenation of Array
  
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]

Strategy used: concatenated the vector with itself 
*/

vector<int> getConcatenation(vector<int>& nums) {
    nums.insert(nums.end(), nums.begin(), nums.end());
    return nums;
}

int main(){
    
    vector<int> nums{1,2,3,4,5};


    for(int x:getConcatenation(nums)){
        cout<<x<<'\t';
    }

    cout<<endl<<endl;

}


