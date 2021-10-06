// Copyright (c) 2021 Daniel Pawelko All rights reserved
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This program calculates the area and perimeter of a circle
//    with a radius 15mm

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter

    std::cout << "If a circle has a radius of 15 mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
