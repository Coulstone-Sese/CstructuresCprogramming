#include <stdio.h>
#include "function.h"

int main() {
    int Size = 10;
    struct FitnessTracker fitnessArray[Size];

  
    populateFitnessTracker(fitnessArray, Size);


    printFitnessTracker(fitnessArray, Size);

    return 0;
}

