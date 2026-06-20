// special type of datatypes used to store address of another variable
#include <iostream>
int main(){
    int x= 6;
    int*p;
    p=&x;
    cout<<"address of variable"<<p<<endl;
}

/*
int x=5;
int *ptr; // ptr is apointer
ptr = &x; // storing address of x in ptr
cout<<ptr; //address of ptr
*/

#include <iostream>

int main() {
    // 1. Declare a normal integer variable
    int myAge = 25; 
    
    // 2. Declare a pointer variable that can point to an integer
    // The asterisk (*) tells C++ this variable is a pointer
    int* ptrAge = nullptr; 
    
    // 3. Store the memory address of myAge into the pointer
    // The ampersand (&) is the "address-of" operator
    ptrAge = &myAge; 
    
    // 4. Output the initial values and locations
    std::cout << "Value of myAge: " << myAge << std::endl;
    std::cout << "Memory address of myAge (&myAge): " << &myAge << std::endl;
    std::cout << "Value stored in ptrAge (the address): " << ptrAge << std::endl;
    
    // 5. Access the value using the pointer
    // The asterisk (*) here is the "dereference" operator (means "go to this address")
    std::cout << "Value at the address ptrAge points to (*ptrAge): " << *ptrAge << std::endl;
    
    // 6. Modify the value directly through the pointer
    *ptrAge = 30; 
    
    // 7. See how the original variable changed
    std::cout << "New value of myAge after using the pointer: " << myAge << std::endl;
    
    return 0;
}
