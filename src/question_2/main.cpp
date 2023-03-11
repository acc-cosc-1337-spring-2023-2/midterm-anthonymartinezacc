#include <iostream>
#include "question2.cpp"
#include "question2.h"
using std::cout;

int main() {
    int num = 0;

    // test the value parameter version
    incrementValue(num);
    cout << "Value parameter version: " << num << std::endl; // output: 0

    // test the reference parameter version
    incrementReference(num);
    cout << "Reference parameter version: " << num << std::endl; // output: 1

    return 0;
}
