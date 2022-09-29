// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Sep. 14, 2022
// This program prints "Hello, World!" and has comments

// include necessary libraries
#include <iomanip>
#include <iostream>

int main() {
    // initialize constants
    const float HST = 0.13;

    // initialize variables
    float diameter;


    std::cout << "What is the diameter of your pizza in inches? ";
    std::cin >> diameter;
    std::cout << std::endl
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << "the cost of your pizza is $"
              << (1.5 * diameter + 4.25) * (HST + 1) << std::endl;
}
