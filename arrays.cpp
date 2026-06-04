// collection of elements of same datatypes
// stored in adjacent/contiguous memory locations
// elements accessed through indexing 0 to ...
// a[0]=10 
// a[4]

/* initialisation-
1) static 
int x[6]={3,5,6,7,8,9,1}

2) dynamic - user defined
int x[6];
for (int i=0;i<6;i++)
cin>>x[i]

1d array int a[5];
2d array int a[10][5];
*/

#include <iostream>
using namespace std;
int main(){
    int arr[3][5]={{7,8,9,10,11},{10,11,12,13,14},{1,2,3,4,5}};
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<"the value at"<<i<<" "<<j<<"is "<<arr[i][j]<<endl;
        }
    }

}

#include <iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,5};
    cout<< "accessing array elements" <<endl;
    cout<< "element at index 0:" << arr1[0] <<endl;
    cout<< "element at index 1:" << arr1[1] <<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for (int i=0; i<5; i++){
        cin>>arr[i];
    }
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

// operations 1. insertion 2. updation 3. deletion
// 1. insertion
// a) at starting
#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5};
    cout<<"original array";
    for (int i=0; i<5; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    int newelement = 10;
    // shift to right side
    for (int i=5; i>0; i--){
        arr[i]= arr[i-1];
    }
    arr[0] = newelement;
    cout << "array after insertion at start";
    for (int i=0; i<6; i++){
        cout<<arr[0]<<" ";
    }
    cout<<endl;
    return 0;
}
// b) at any index 
#include <iostream>
using namespace std;
int main(){
    int arr[6] = {1,2,3,4,5};
    cout<<"original array:";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int position=2;
    int newelement = 10;
    // shift right 
    for (int i=5; i>position; i--){
        arr[i]=arr[i-1];
    }
    arr[position]=newelement;
    cout<<"new array after insertion";
    for (int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// c) at end 
#include <iostream>
using namespace std;
int main(){
    int arr[6] ={1,2,3,4,5};
    int newelement = 10;
    arr[5] = newelement;
    cout<<"new array after insertion";
    for (int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// 3. deletion 
// a) at starting 
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5; 
    cout<<"original array:";
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// b) at any index 
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    cout <<"original array: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int position =2;
    if (position<0 || position>=n){
        cout<<"invalid position"<<endl;
        return 0;
    }
    //shift left
    for (int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"array after deletion at position "<<position<<": ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// c) at end
include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    cout <<"original array: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n--; //decrease size of array
    cout<<"array after deletion at end : "<<;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// searching elements (linear search)
include <iostream>
using namespace std;
int main(){
    int arr[6] = {1,2,3,5,7,6};
    int n = 6;
    int key = 7;
    bool found = false;

    for (int i=0; i<n; i++){
        if (arr[i]==key){
           found = true;
           cout<<"element"<<key<<" is found at: "<<i<<endl;
           break;
        }
    }

    if(!found){
       cout<<"element is not present"<<endl;
    }
    return 0;
}
// DSA PROBLEMS
// Q1: SUM OF ALL ARRAY ELEMENTS
#include <iostream>
using namespace std;
int main(){
    int arr[6]={2,5,8,9,6,4};
    int sum = 0;
    for (int i =0; i < 6; i++){
        sum += arr[i];
    }
    cout<<"sum of array is:"<< sum<< endl;
}
// Q2: NUMBER OF ELEMENTS PRESENT IN THE ARRAY 
#include <iostream>
using namespace std;
int main(){
   int arr[]={1,2,3,4,5};
   int size = sizeof(arr)/sizeof(arr[1]); // size of array in bytes divided by number of bytes in 1 element = size of elements present in array
   cout<<size;
}
// Q3: FIND AVG OF ARRAY ELEMENTS
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Printing original array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "The sum of array is: " << sum << endl;

    double avg = (double)sum / size;
    cout << "The average of array is: " << avg << endl;

    return 0;
}
// Q4: FIND MAX AND MIN ELEMENTS OF ARRAY
#include <iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5,-1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int min = arr[0];
  for (int i=0; i<size; i++){
      if (min>arr[i]){
          min= arr[i];
      }
  }
  cout<<"minimum element is: "<<min<<endl;
  int max = arr[0]; 
  for (int i=0; i<size; i++){
      if (max<arr[i]){
          max = arr[i];
      }
  }
  cout<<"maximum element is: "<<max<<endl;
}
// Q5: COUNT OCCURENCE OF GIVEN ARRAY ELEMENTS
#include <iostream>
using namespace std; 
int main(){
    int count = 0;
    int element = 2;
    int arr[] ={1,2,2,3,2,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i<size; i++){
        if(element==arr[i]){
          count+=1; //count++;
        }
    }
    cout<<"occurence of element "<<element<<" is: "<<count<<endl;
}
// Q6: REVERSE ARRAY
#include <iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int brr[4];
    for(int i=3; i>=0; i--){
       brr[4-1-i]=arr[i];
    }
    for(int i=0; i<4; i++) {
    cout << brr[i] << " ";
    }
    cout << endl;
}
// method 2 
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};
    int start = 0;
    int end = 3; 

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Q7: PRINT EVEN ODD ELEMENTS
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "printing even elements: " << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "printing odd elements: " << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
