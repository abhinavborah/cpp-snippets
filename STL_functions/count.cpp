/*

std::count() returns number of occurrences of an element in a given range. 
Returns the number of elements in the range [first,last) that compare equal to val.

count(Iterator first, Iterator last, T &val)

Source: GFG
*/

#include <bits/stdc++.h>
using namespace std;

// leetcode 2114: Maximum words found in a sentence; strategy used: count the number of spaces ' '.
int mostWordsFound(vector<string>& sentences) {
    int res=0;
    for(auto i:sentences)
        res=max(res,(int)count(i.begin(),i.end(),' ')+1);
    return res;
}

int main()
{
    vector<string> sentences{"alice and bob love leetcode", "i think so too", "this is great thanks very much"};

    cout<<"Max no. of words: "<<mostWordsFound(sentences)<<endl;
    
    return 0;
}

