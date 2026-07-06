// SORTING 
// - Faster searching like binary search
// - Better organisation for real life tasks like contact lists or leaderboards
// - Foundation for many algos like solving duplicate problems, range queries 


// 1. BUBBLE SORTING 
// - simple
// - compares adjacent elements and swaps if in wrong order, repeats until the array is sorted 
// - largest element bubble up at the end of the array with each pass

// eg array: 5 4 3 2 1 

// pass 1: 5 4 3 2 1 
// n - pass = 5 - 1 = 4 steps - hence no need to check last element (5th)
// size - pass ensures bubble sort doesn’t waste time checking elements that are already in their correct positions after each pass.
// if i > i+1 then swap element 
// 4 5 3 2 1
// 4 3 5 2 1
// 4 3 2 5 1
// 4 3 2 1 5

// pass 2: 4 3 2 1 5
// 5 - 2 = 3
// 3 4 2 1 5
// 3 2 4 1 5
// 3 2 1 4 5

// pass 3: 3 2 1 4 5
// 5 - 3 = 2
// 2 3 1 4 5
// 2 1 3 4 5

// pass 4: 2 1 3 4 5
// 5 - 4 = 1
// 1 2 3 4 5 sorted array 

// psuedo code
// for (pass =1; pass<= n-1; pass++)
// {
// for (int i = 0; i<=n-1-pass; i++)
// {
// if (arr[i] > arr[i+1])
// {
// swap(arr[i], arr[i+1]) 
// }
// }
// }

#include <iostream>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<< "printing original array:"<< endl;
  for (int i = 0; i<size; i++){
    cout<<arr[i]<< " ";
  }
  cout<< endl;
  
  for (int pass = 1; pass<size; pass++){
    for (int i = 0; i<size-pass; i++){
      if (arr[i] > arr[i+1]){
        swap(arr[i], arr[i+1]);
      }
    }
  }
  
  cout<< "printing after sorting:"<<endl;
  for (int i = 0; i<size; i++){
    cout<<arr[i]<< " ";
  }
  cout<< endl;
  return 0;
}

// optimised code 
#include <iostream>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<< "printing original array:"<< endl;
  for (int i = 0; i<size; i++){
    cout<<arr[i]<< " ";
  }
  cout<< endl;
  
  for (int pass = 1; pass<size; pass++){
    bool flag = false; // added logic for optimisation; flag is a smart check that prevents Bubble Sort from doing extra work when the array is already sorted.
    for (int i = 0; i<size-pass; i++){
      if (arr[i] > arr[i+1]){
        swap(arr[i], arr[i+1]);
        flag = true; // indicates swap occured 
      }
    }
    if (flag == false){ // no swaps happened , break out of the loop early.
      cout<<"array is already sorted"<<endl;
      break
    }
  }
  
  cout<< "printing after sorting:"<<endl;
  for (int i = 0; i<size; i++){
    cout<<arr[i]<< " ";
  }
  cout<< endl;
  return 0;
}
/*
Normal Bubble Sort:
- Bubble Sort works by repeatedly swapping adjacent elements if they are in the wrong order.
- Even if the array becomes sorted early, the algorithm still continues through all passes, wasting time.

Role of flag:
- At the start of each pass, you set flag = false.
- If any swap happens during that pass, you set flag = true.
- If no swap happens (flag remains false), it means the array is already sorted, so you can break out of the loop early instead of continuing unnecessary passes.

* Why it’s useful: 
(time complexity)
- Best case (array already sorted): Bubble Sort finishes in O(n) time instead of O(n²). 
- Worst & avg case (array reversed): Still O(n²), but no worse than standard Bubble Sort.

Dry Run Example:
Array: {1, 2, 3, 4, 5} (already sorted)

Pass 1:  
Compare each pair → no swaps.
flag stays false.
→ Algorithm prints "array is already sorted" and exits.
= Only 1 pass instead of 5.

Array: {5, 1, 4, 2, 8} (unsorted)
- Pass 1: swaps happen → flag = true. Continue.
- Pass 2: swaps happen → flag = true. Continue.
- Pass 3: swaps happen → flag = true. Continue.
- Pass 4: no swaps → flag = false. Stop early.
= Sorted in 4 passes instead of always forcing 5.
*/

// 2. INSERTION SORTING 
// - simple
// - builds final sorted array one element at a time 
// - it takes each element and inserts it in its correct position in the sorted part of the array, repeat until array is sorted
// - compares i element (2nd)  with i-1 element (1st) and shifts accordingly 
// - i = 0 index , i+1 = 1 index compared, if i+1<i then swap 

// eg array: 5 4 3 2 1 -2

// pass 1: 4 5 3 2 1 -2

// pass 2: 4 5 3 2 1 -2
// 4 3 5 2 1 -2
// 3 4 5 2 1 -2

// pass 3: 3 4 5 2 1 -2
// 3 4 2 5 1 -2
// 3 2 4 5 1 -2
// 2 3 4 5 1 -2

// pass 4: 2 3 4 5 1 -2
// 2 3 4 1 5 -2
// 2 3 1 4 5 -2
// 2 1 3 4 5 -2
// 1 2 3 4 5 -2

// pass 5: 1 2 3 4 5 -2
// 1 2 3 4 -2 5
// 1 2 3 -2 4 5
// 1 2 -2 3 4 5
// 1 -2 2 3 4 5
// -2 1 2 3 4 5

// pseudocode
// if (arr[j] > key){ 
// arr [j+1] = arr[j] }
// else {
// break };

// key : This is the element we’re currently trying to insert into the correct position in the sorted part of the array.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 8, 2, -12, 78, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Printing original array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insertion sort logic
    for (int i = 1; i < size; i++) {
        int temp = arr[i];   // key element
        int j = i - 1;

        // shift elements greater than temp to the right
        for (; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        // place temp in its correct position
        arr[j + 1] = temp;
    }

    cout << "Printing sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// algorithm :
// 1. start from second element
// 2. store the current element as key
// 3. compare the elements to its left and shift it to the right if left is greater than key
// 4. once correct position is found insert the key

// time complexity:
// best case (array already sorted) - O(n)
// worst & avg case - O(n²)

/*

Dry Run with `arr = {1, 5, 8, 2, -12, 78, 3}`

Pass 1 (i = 1, temp = 5):
- Compare arr[0] = 1 with temp = 5 → 1 is not greater, break.
- Place temp at arr[1].
- Array stays: `[1, 5, 8, 2, -12, 78, 3]`.

Pass 2 (i = 2, temp = 8):
- Compare arr[1] = 5 with 8 → not greater, break.
- Place temp at arr[2].
- Array stays: `[1, 5, 8, 2, -12, 78, 3]`.

Pass 3 (i = 3, temp = 2):
- Compare arr[2] = 8 > 2 → shift → `[1, 5, 8, 8, -12, 78, 3]`.
- Compare arr[1] = 5 > 2 → shift → `[1, 5, 5, 8, -12, 78, 3]`.
- Compare arr[0] = 1 > 2 → false, break.
- Place temp at arr[1].
- Result: `[1, 2, 5, 8, -12, 78, 3]`.

Pass 4 (i = 4, temp = -12):
- Compare arr[3] = 8 > -12 → shift → `[1, 2, 5, 8, 8, 78, 3]`.
- Compare arr[2] = 5 > -12 → shift → `[1, 2, 5, 5, 8, 78, 3]`.
- Compare arr[1] = 2 > -12 → shift → `[1, 2, 2, 5, 8, 78, 3]`.
- Compare arr[0] = 1 > -12 → shift → `[1, 1, 2, 5, 8, 78, 3]`.
- j = -1, loop ends.
- Place temp at arr[0].
- Result: `[-12, 1, 2, 5, 8, 78, 3]`.

Pass 5 (i = 5, temp = 78):
- Compare arr[4] = 8 > 78 → false, break.
- Place temp at arr[5].
- Array stays: `[-12, 1, 2, 5, 8, 78, 3]`.

Pass 6 (i = 6, temp = 3):
- Compare arr[5] = 78 > 3 → shift → `[-12, 1, 2, 5, 8, 78, 78]`.
- Compare arr[4] = 8 > 3 → shift → `[-12, 1, 2, 5, 8, 8, 78]`.
- Compare arr[3] = 5 > 3 → shift → `[-12, 1, 2, 5, 5, 8, 78]`.
- Compare arr[2] = 2 > 3 → false, break.
- Place temp at arr[3].
- Final result: `[-12, 1, 2, 3, 5, 8, 78]`.

*/

// 3. MERGE SORTING
