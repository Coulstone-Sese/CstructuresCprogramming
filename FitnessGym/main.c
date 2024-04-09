#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 2; // Change this if you want a different size
    struct FitnessTracker fitnessArray[arraySize];

    // Populate the structure array
    populateFitnessTracker(fitnessArray, arraySize);

    // Print the structure elements
    printFitnessTracker(fitnessArray, arraySize);

    return 0;
}

