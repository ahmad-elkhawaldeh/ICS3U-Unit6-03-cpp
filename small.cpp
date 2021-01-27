// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2021
// This program uses an array



#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int find_smallest(int array[]) {
    int smallest = array[0];
    for (int value = 0; value < 10; ++value) {
        if (array[value] < smallest)
            smallest = array[value];
    }
    return smallest;
}

int main() {
    srand(time(NULL));
    int array[10];
    for (int value = 0; value < 10; ++value) {
        array[value] = rand() % 100;
    }
    cout << "Here is a list of random numbers:" << endl << endl << endl;
    for (int value = 0; value < 10; ++value) {
        cout << "The random number " << value + 1 << " is: " << array[value] << endl;
    }
    cout << endl << "The smallest number is " << find_smallest(array) << endl;
    cout << "Done." << endl;
}
