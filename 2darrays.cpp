// passing array in functions
#include <iostream>
using namespace std;
void print(int arr[], int n){
  for (int i=0; i<n; i++){
       cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int arr[5] = {1,2,3,4,5};
  print(arr,5);
}

// 2d array
#include <iostream>
using namespace std;
int main(){
  int arr[3][2];
  arr[0][0]=1;
  arr[0][1]=2;
  arr[1][0]=3;
  arr[1][1]=4;
  arr[2][0]=5;
  arr[2][1]=6;
  int brr[2][3]={{1,2,3},{4,5,6}};
  for(int i=0; i<2; i++){
    for (int j=0; j<3; j++){
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }
}
// limitations of arrays: 
// 1. fixed size 
// 2. stack overflow 
// 3. no built in functions available in it 
// 4. cannot resize 

// vector/ dynamic array
// 1. automatically resizable 
// 2. easy to return and pass around 
// 3. frequently used at coding platforms like leetcode 
#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> arr;
  vector<int> arr1(6);
  vector<int> arr2(3,9);
  cout<<"taking input in the vector"<<endl;
  for (int i=0; i<6; i++){
    cin>>arr1[i]<<" ";
  }
  cout<<"printing the vector"<<endl;
  for (int i=0; i<6; i++){
    cout<<arr1[i]<<" ";
  }
  // 2d array vector declaration
  vector<vector<int>> mat(3,vector<int>(2));
  vector <int> brr;
  brr.push_back(6); //insertion
  brr.push_back(60); 
  brr.push_back(67);
  cout<<brr.size();
  for (int i=0; i<brr.size(); i++){
    cout<<brr[i]<<" ";
  }
  cout<<endl;
  brr.pop_back(); //deletion of last element 
  cout<<brr.at(3); //accessing value at 3rd index
  cout<<brr.front(); //accessing 1st element
  cout<<brr.back(); //last element
  cout<<brr.size()<<endl; //the size of current array/elements present currently
  cout<<brr.capacity()<<endl<<endl; //doubles the size of the previouys element, allocated memory size
  cout<<brr.emplace_back(21); //places element in the back, faster than push_back() 
}
// common functions
// 1. sorting
// sort(v.begin(), v.end()) ascending
// sort(v.rbegin(), v.rend()) descending 
// 2. reverse 
// reverse(v.begin(), v.end())
// 3. find element
// find(v.begin(),v.end(),x)
// 3. count element
// count(v.begin(),v.end(),x)
#include <algorithm> // use built in header file to use built in function
int main(){
    sort(brr.begin(),brr.end());
    cout<<"array after sorting "<<endl;
    for( int i=0; i<brr.size();i++){
       cout<<brr[i]<<" "
    }
    cout<<endl;
    auto it find(brr.begin(),brr.end(),50)
    if (it != end()){
      cout<<distance(brr.begin(), it);
    }
  else{
    cout<<"element not found";
}
// LEETCODE QUESTIONS
// Q1: Given an array of integers nums and an integer target, return indices ofthe two numbers such that they add up to target.
/* You may assume that each input would have exactly one solution, and you may not use the some element twice.
You can return the answer in any order.
Example 1:
Input: nums = [2,7,11,15],
target = 9 Output: [0,1]

Explanation:
Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums =
target = 6
Output: [1,2]
[3,2,41,

Example 3:
Input: nums = [3,3],
target = 6 Output: [0,1]
*/
//TWO SUM 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i=0; i<n; i++){ //n-1 for loop optimisation
            for (int j=i+1; j<n; j++){ // n-2 
                int sum = nums[i] + nums[j];
                if (sum == target){
                    return{i,j};
                }
            }
        }
        return{-1,-1};
    }
};
// Q2: Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
/*
Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.
The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

Custom Judge:
The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.
*/
class Solution{
public:
    int removeDuplicates(vector<int>&nums){
      int i = 0;
      int j = 1;
      int n = nums.size();
      while (j<n){
            if(nums[i]!=nums[j]){
              i++;
              nums[i] = nums[j];
            }
            j++;
      }
      return i+1; //since arr are 0 indexed, i is the index of last unique element
   }
};

