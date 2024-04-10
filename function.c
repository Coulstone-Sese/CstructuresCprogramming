#include <stdio.h>
#include "function.h"


void populateFitnessTracker(struct FitnessTracker *fitnessArray, int Size) 
{
    for (int i = 0; i < Size; i++)
    {
        printf("\nEnter details for Workout %d:\n", i + 1);
        printf("Workout Type: ");
        scanf("%s", fitnessArray[i].workoutType); // shouldn't contain spaces
        printf("Time duration (minutes):");
        scanf("%f", &fitnessArray[i].duration);
        printf("Calories Burnt(Kcals):");
        scanf("%f", &fitnessArray[i].caloriesBurnt);
        printf("Date (YYYY-MM-DD): ");
        scanf("%s", fitnessArray[i].date); // shouldn't contain spaces
    }
}


void printFitnessTracker(struct FitnessTracker *fitnessArray, int Size) {
    printf("\nFitness Tracker Details:\n");
    for (int i = 0; i < Size; i++) {
        printf("Workout %d:\n", i + 1);
        printf("Workout Type: %s\n", fitnessArray[i].workoutType);
        printf("Duration: %.2f minutes\n", fitnessArray[i].duration);
        printf("Calories Burnt: %.2f\n", fitnessArray[i].caloriesBurnt);
        printf("Date: %s\n", fitnessArray[i].date);
    }
}

