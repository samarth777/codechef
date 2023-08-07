/*
Functors are an essential concept in C++ that allow you to treat objects as if they were functions. 
They are also known as "function objects." Functors are instances of classes that can be used with the function call syntax, 
just like regular functions.

In C++, operator() is a special function that allows instances of a class or struct to be called like a function. 
It is known as the "function call operator." 
When you define this operator within a class or struct, 
you essentially enable objects of that type to act as if they were functions themselves.*/

#include <iostream>
using namespace std;  
// Step 1: Create a Functor Class
class AddFunctor {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

// Step 2: Using the Functor
int main() {
    AddFunctor add;
    int result = add(3, 5);
    cout << "Result: " << result << endl;

    return 0;
}
