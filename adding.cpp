// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in November 2020
// Program adding 2 numbers

#include <iostream>

int main() {
    // This function finds the sum of 2 numbers

    float first_number;
    float second_number;
    float sum;

    // Input
    std::cout << "Please enter the first number: ";
    std::cin >> first_number;
    std::cout << "Please enter the second_number: ";
    std::cin >> second_number;

    // Process
    sum = first_number + second_number;

    // Output
    std::cout << first_number << "+" << second_number
    << "=" << sum << std::endl;
}
