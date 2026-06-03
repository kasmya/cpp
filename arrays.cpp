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
// searching elements
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
