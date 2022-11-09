// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Nov.2, 2022
// This program returns the square value of a user-
// inputted number and all other numbers preceding it.

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // Initializing variables
    int userInt, wait;
    std::string userStr;

    // Gets the user's number as a string
    std::cout << "Enter an integer: ";
    std::cin >> userStr;

    // Checks if there is a decimal in the user's number
    if (userStr.find('.') != std::string::npos) {
        std::cout << "You must enter a whole number.\n";
        std::cout << "Please restart.\n";
        std::cin >> wait;
    }

    // Tries casting the user's number to an integer
    try {
        userInt = std::stoi(userStr);

        // Tells the user to restart if they did not enter a number.
    } catch (const std::exception) {
        std::cout << "You must enter a positive integer.\n";
        std::cout << "Please try again.";
        std::cin >> wait;
    }

    // Tells the user to restart if they entered a negative number.
    if (userInt < 0) {
        std::cout << "You must enter a positive integer\n";
        std::cout << "Please try again.\n";
        std::cin >> wait;
    }

    // Loops through code until counter is equal to userInt
    for (int counter = 0; counter < userInt + 1; counter++) {
        std::cout << "Looped through " << counter << " times.\n";
        int squared = pow(counter, 2);
        std::cout << counter << "^2 = " << squared << "\n\n";
    }
}
