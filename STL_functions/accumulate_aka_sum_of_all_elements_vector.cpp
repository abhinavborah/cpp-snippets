/*

std::accumulate(): This function returns the sum of all the values lying in a range between [first, last) with the variable sum.

Syntax:

    accumulate(first, last, sum);

    or

    accumulate(first, last, sum, myfun); 

Parameters:

    first, last: first and last elements of range whose elements are to be added
    sum:  initial value of the sum
    myfunc: a function for performing any specific task. One can even perform multiplication,subtraction,etc with a custom defined function

Source: GFG
*/

#include<bits/stdc++.h>
using namespace std;

/* 
LeetCode: 

1672. Richest Customer Wealth
  
Input: accounts = [[1,2,3],[3,2,1]]
Output: 6

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10

Strategy used: compared the subsubs of the vectors inside the main vector 
*/

int maximumWealth(vector<vector<int>>& accounts) {
    int rich=0;
    for(auto x:accounts){
        rich=max(rich, accumulate(x.begin(), x.end(),0));
    }
    return rich;
}

int main(){
    vector<vector<int>> accounts{{2,8,7},{7,1,3,4},{9,5}};

    cout<<maximumWealth(accounts)<<endl;

}