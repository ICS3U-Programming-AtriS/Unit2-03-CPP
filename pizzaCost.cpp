// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: March 4, 2025
// This program asks the user for the size of a pizza,
// which is provided through the value of the diameter in inches.
// Using the size, the program calculates and displays the cost of the pizza

#include <iostream>
#include <cmath>

int main() {
    // declare constants
    // Rate for Sales Tax
    const float HST = 0.13;
    // Labour cost is $2.00 / pizza, regardless of size
    const float LABOUR_COST = 2.00;
    // Rental cost for the shop works out to $2.25 / pizza, regardless of size
    const float RENTAL_COST = 2.25;
    // Ingredients cost $1.50 / diameter inch of pizza
    const float INGREDIENT_COST_PER_INCH = 1.50;

    // declare variables
    float diameter, subtotal, tax, total;

    // Get the Pizza's diameter in inches
    std::cout << "Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // Calculate the subtotal
    subtotal = LABOUR_COST + RENTAL_COST;
    subtotal += INGREDIENT_COST_PER_INCH * diameter;
    // Calculate the tax
    tax = subtotal * HST;
    // Calculate the total
    total = subtotal + tax;

    // Display the total cost of the pizza to the user
    std::cout << "The total cost is $";
    // total is rounded to 2 decimal places
    std::cout << floor(total / 0.01) / 100 << std::endl;
}
