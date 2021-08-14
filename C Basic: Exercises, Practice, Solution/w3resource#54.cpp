#include <stdio.h>
#include <string.h>

// Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.

int main() {

// Declaring variable 
double cm;
double inch;

printf("Enter your distance in cm : ");
scanf("%lf", &cm);

// Formula to convert cms to inches : 
inch = cm/2.54;

printf("The distance of %lf is : %lf", cm, inch);
return 0;
}
