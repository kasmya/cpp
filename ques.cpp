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
// PROBLEM 2000:REVERSE PREFIX OF WORD
/*
 Given a 0-indexed string word and a character ch, reverse the segment of word that starts at index 0 and ends at the index of the first occurrence of ch (inclusive). If the character ch does not exist in word, do nothing.

For example, if word = "abcdefd" and ch = "d", then you should reverse the segment that starts at 0 and ends at 3 (inclusive). The resulting string will be "dcbaefd".
Return the resulting string.

 

Example 1:

Input: word = "abcdefd", ch = "d"
Output: "dcbaefd"
Explanation: The first occurrence of "d" is at index 3. 
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".
Example 2:

Input: word = "xyxzxe", ch = "z"
Output: "zxyxxe"
Explanation: The first and only occurrence of "z" is at index 3.
Reverse the part of word from 0 to 3 (inclusive), the resulting string is "zxyxxe".
Example 3:

Input: word = "abcd", ch = "z"
Output: "abcd"
Explanation: "z" does not exist in word.
You should not do any reverse operation, the resulting string is "abcd".
 */
class Solution {
public:
    string reversePrefix(string word, char ch) {
        // Step 1: manually search for the first occurrence of ch
        int pos = -1; // -1 means "not found"
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                pos = i;
                break; // stop at the first match
            }
        }

        // Step 2: if not found, just return the word
        if (pos == -1) {
            return word;
        }

        // Step 3: reverse the prefix [0..pos] using two pointers
        int left = 0;
        int right = pos;
        while (left < right) {
            swap(word[left], word[right]);
            left++;
            right--;
        }

        // Step 4: return the modified word
        return word;
    }
};
