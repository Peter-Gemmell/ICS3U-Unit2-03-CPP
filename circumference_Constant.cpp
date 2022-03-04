// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This is the Perimeter and Area
// This program calculates the circumference of a circle using constants

#include <iostream>

int main() {
    // This function calculates circumference using constants
    int radius;
    const double TAU = 6.28;
    double circumference;

    // input
    std::cout << "Enter radius of a circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << " mm" << std::endl;
    std::cout << "\nFinished." << std::endl;
}
