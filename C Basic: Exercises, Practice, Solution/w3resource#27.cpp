#include <stdio.h>
#include <string.h>

// Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.

int main() {

int i;
int number;
int pNb = 0; //  Declaring and initializing positive numbers = 0
int nNb = 0; //  Declaring and initializing negative numbers = 0

// For loop
for ( i = 0; i <5; i++)
{
    printf("Enter a number : ");
    scanf("%d", &number);
    if (number > 0)
    {
        pNb++;
    }
    else
    {
        nNb++;
    }
}
printf("There are %d positive numbers and %d negative numbers", pNb, nNb);
   return 0;
}
