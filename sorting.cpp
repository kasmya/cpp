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
- Best case (array already sorted): Bubble Sort finishes in O(n) time instead of O(n²). avg case O(n²)
- Worst case (array reversed): Still O(n²), but no worse than standard Bubble Sort.

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


