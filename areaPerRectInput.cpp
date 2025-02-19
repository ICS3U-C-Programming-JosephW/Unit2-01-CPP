
// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Feb. 19, 2025
/* This program uses user input to calculate
the area and perimeter of any rectangle. */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// A function determining the area and perimeter based on the user input.
void calcAreaPerimeter() {
    float length;
    float width;

    cout << "Enter the length of the rectangle here (in cm): \n";
    cin >> length;
    cout << "Enter the width of the rectangle here (in cm): \n";
    cin >> width;

    cout << "If a rectangle has the dimensions: \n";
    cout << length << "cm x " << width << "cm \n\n";
    cout << "The area is: " << (length * width) << "cm^2 \n";
    cout << "The perimeter is: " << (2 * (length + width)) << "cm \n";
}

int main() {
    calcAreaPerimeter();
}
