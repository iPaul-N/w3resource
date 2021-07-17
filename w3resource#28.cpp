#include <stdio.h>
#include <string.h>

// Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.

int main() {

int k;
double number;
int pNb = 0;
double average;
double sum = 0;

for ( k = 0; k <5; k++)
{
    printf("Enter a number : ");
    scanf("%lf", &number);
    if (number > 0)
    {
        pNb++;
        sum +=number;
    }
}
average = sum/ pNb;
printf("There is %d positive numbers\n", pNb);
printf("The average of all positive values is %lf : ", average); 
return 0;
}