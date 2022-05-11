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
        if (number > 0) {
            for (int counter = 0; counter < number + 1; counter++) {
                sum = counter * counter;
                std::cout << counter << "² = " << sum << std::endl;
            }
        } else {
            std::cout << "Not a positive number" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Not a number";
    }
    std::cout << "\nDone." << std::endl;
}

