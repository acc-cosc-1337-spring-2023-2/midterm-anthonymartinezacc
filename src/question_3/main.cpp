#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout; using std::cin;

int main() {
    char choice;
    do {
        cout << "Roll the die? (Y/N): ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y') {
            // roll the die and display the result
            int result = roll_die();
            cout << "You rolled a " << result << std::endl;
        }

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
