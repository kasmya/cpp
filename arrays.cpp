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
