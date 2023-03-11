#include <iostream>
#include "question1.cpp"
#include "question1.h"
using std::cout; using std::cin;

int main() {
    int GCDinput1, GCDinput2;
    while (true) {
        cout << "Enter two integers in the range of 1 to 200, separated by a space: ";
        cin >> GCDinput1 >> GCDinput2;
        int gcd = find_ged(GCDinput1, GCDinput2);
        if (gcd != -1) {
            cout << "The greatest common denominator of " << GCDinput1 << " and " << GCDinput2 << " is " << gcd << std::endl;
        }
        cout << "Enter 'q' to quit or any other key to continue: ";
        char choice;
        cin >> choice;
        if (choice == 'q' || choice == 'Q') {
            break;
        }
    }
    return 0;
}
