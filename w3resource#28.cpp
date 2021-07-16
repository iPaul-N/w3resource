#include <stdio.h>
#include <string.h>

// Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.

int main() {

int k;
float number;
int pNb = 0;
float average;
float sum = 0;

for ( k = 0; k <5; k++)
{
    printf("Enter a number : ");
    scanf("%f", &number);
    if (number > 0)
    {
        pNb++;
        sum +=number;
    }
}
average = sum/ pNb;
printf("There is %d positive numbers\n", pNb);
printf("The average of all positive values is %f : ", average); 
return 0;
}