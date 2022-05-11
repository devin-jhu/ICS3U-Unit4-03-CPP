// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The loop adder

#include <iostream>

int main() {
    // this program shows the sum of all numbers from 0 to number
    std::string intNumber;
    int number;
    int sum = 0;
    int counter = 0;


    // input
    std::cout << "Enter number (integer): ";
    std::cin >> intNumber;
    std::cout << std::endl;

    // process & output
    try {
        number = std::stoi(intNumber);
        while (counter < number) {
            counter = counter + 1;
            sum = sum + counter;
        }
        std::cout << "The sum of numbers to "
        << number << " is " << sum << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Not an integer";
    }
    std::cout << "\nDone." << std::endl;
}
