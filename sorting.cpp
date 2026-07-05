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
// n - pass = 5 - 1 = 4 steps 
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
// 1 2 3 4 5
