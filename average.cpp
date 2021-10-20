// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program calculates the average of 10 random numbers

#include <iostream>
#include <random>

int main() {
    // This function calculates the average of 10 random numbers
    int numList[10];
    float average = 0;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);  // [0,9]

    // process & output
    for (int counter = 0; counter < 10; counter++) {
        int num = idist(rgen);
        numList[counter] = num;
        average += num;

        std::cout << "The random number is: " << num << std::endl;
    }

    average = average / (sizeof(numList) / sizeof(numList[0]));
    printf("\nThe average is %.1f.\n", average);

    std::cout << "\nDone." << std::endl;
}
