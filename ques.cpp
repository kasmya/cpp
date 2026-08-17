// PROBLEM 344: REVERSE STRING ARRAY
/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/
//O(N) TIME COMPLEXITY
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        vector<char> ans;
        for(int i=n-1; i>=0; i--){
            ans.push_back(s[i]);
        }
        s=ans;
    }
};
//O(1) TIME COMPLEXITY - using 2 pointers
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i =0 , j =n-1;
        while (i<j){
         swap(s[i],s[j]);
         i++;
         j--;
        }
    }
};
