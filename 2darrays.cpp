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


