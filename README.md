# 📘 C++ Basics, DSA & Placement Prep

This repository is a complete resource for:
- Learning **C++ syntax** from scratch (with Python comparisons for quick transition).
- Practicing **Data Structures & Algorithms (DSA)** with solved problems.
- Preparing for **coding interviews and placements** with common leetcode questions.

> ⚡ Note: This README is a **cheat sheet** for quick reference.  
> Detailed code examples are available in individual files inside the repo.
---

## 📑 Table of Contents
- [Basics of C++](#-basics)
- [Variables & Data Types](#-variables--data-types)
- [Input & Output](#-input--output)
- [Control Flow](#-control-flow)
- [Functions](#-functions)
- [Arrays & Vectors](#-arrays--vectors)
- [Strings](#-strings)
- [STL Algorithms](#-stl-algorithms)
- [Classes & Objects](#-classes--objects)
- [Pointers](#-pointers-advanced)

---

## 🔹 Basics

```cpp
#include <iostream> // import library for input/output
using namespace std;

int main() { // entry point of every C++ program
    cout << "Hello, World!" << endl; // like print() in Python
    return 0;
}
```
## 🔹 Variables & Data Types
```cpp
int age = 21;        // integer
double pi = 3.14;    // floating point
char grade = 'A';    // single character
string name = "Alex"; // text
bool isHappy = true; // boolean
```
## 🔹 Input & Output
```cpp
int x;
cin >> x;   // input
cout << x;  // output
```
## 🔹 Control Flow
```cpp
if (x > 10) {
    cout << "Big";
}
else {
    cout << "Small";
}

for (int i = 0; i < 5; i++) {
    cout << i << endl;
}

while (x > 0) {
    cout << x << endl;
    x--;
}
```
## 🔹 Functions
```cpp
int add(int a, int b) {
    return a + b;
}
```
## 🔹 Arrays & Vectors
```cpp
int arr[5] = {1, 2, 3, 4, 5};  // fixed size array

#include <vector>
vector<int> nums = {1, 2, 3};  // dynamic array
nums.push_back(4);
```
## 🔹 Strings
```cpp
#include <string>
string s = "Hello";
cout << s.size();   // length
cout << s[0];       // indexing
```
## 🔹 STL Algorithms
```cpp
#include <algorithm>
vector<int> v = {3, 1, 4};
sort(v.begin(), v.end());    // sort
reverse(v.begin(), v.end()); // reverse
```
## 🔹 Classes & Objects
```cpp
class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "Hi, I'm " << name << endl;
    }
};

int main() {
    Person p;
    p.name = "Alex";
    p.age = 21;
    p.introduce();
}
```
## 🔹 Pointers (Advanced)
```cpp
int x = 10;
int* ptr = &x;   // pointer stores address
cout << *ptr;    // dereference → prints 10
```
