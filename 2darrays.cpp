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
  return 0;
}
