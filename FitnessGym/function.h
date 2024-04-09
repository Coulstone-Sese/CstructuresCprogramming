#ifndef FUNCTION_H
#define FUNCTION_H

struct FitnessTracker {
    char workoutType[100];
    float duration;
    float caloriesBurnt;
    char date[20];
};

void populateFitnessTracker(struct FitnessTracker *fitnessArray, int arraySize);
void printFitnessTracker(struct FitnessTracker *fitnessArray, int arraySize);

#endif

