#include <stdio.h>
#include "function.h"

// Function to populate the structure array
void populateFitnessTracker(struct FitnessTracker *fitnessArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Workout %d:\n", i + 1);
        printf("Workout Type: ");
        scanf("%s", fitnessArray[i].workoutType); // Assuming workoutType does not contain spaces
        printf("Duration (in minutes): ");
        scanf("%f", &fitnessArray[i].duration);
        printf("Calories Burnt: ");
        scanf("%f", &fitnessArray[i].caloriesBurnt);
        printf("Date (YYYY-MM-DD): ");
        scanf("%s", fitnessArray[i].date); // Assuming date does not contain spaces
    }
}

// Function to print the structure elements
void printFitnessTracker(struct FitnessTracker *fitnessArray, int arraySize) {
    printf("\nFitness Tracker Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Workout %d:\n", i + 1);
        printf("Workout Type: %s\n", fitnessArray[i].workoutType);
        printf("Duration: %.2f minutes\n", fitnessArray[i].duration);
        printf("Calories Burnt: %.2f\n", fitnessArray[i].caloriesBurnt);
        printf("Date: %s\n", fitnessArray[i].date);
    }
}

