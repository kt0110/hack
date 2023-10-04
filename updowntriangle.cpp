// C++ code for printing up-side down right angled triangle pattern with "*" taking input of numbers of rows from user

#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    // Outer loop for rows
    for (int i = n; i >= 1; --i) {
        // Inner loop for printing asterisks
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        // Move to the next line after each row is printed
        std::cout << std::endl;
    }

    return 0;
}
