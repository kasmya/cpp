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
}
