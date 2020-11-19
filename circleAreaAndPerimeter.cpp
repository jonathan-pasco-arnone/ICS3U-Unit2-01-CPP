// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on November 2020
// This program calculates the area and perimeter of a circle

#include <iostream>
#include <cmath>

int main() {
    double number;
    double area;
    double perimeter;

    std::cout << "This program calculates the area and perimeter of a circle."
    << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please enter a radius measurement:" << std::endl;
    std::cout << "If a circle has a radius of :";
    std::cin >> number;
    area = pow(number, 2)*M_PI;
    perimeter = M_PI*2*number;
    std::cout << "Then the Area is " << area << std::endl;
    std::cout << "And the Perimeter is " << perimeter << std::endl;
}
