#include <stdio.h>
#include <string.h>

// Write a C program to find and print the square of each one of the even values from 1 to a specified value.

int main() {

// Declaring variable
int number;
int i;

printf("Enter a number : ");
scanf("%d", &number);

// For loop

for ( i = 1; i < number; i++)
{
    if ((number%2) == 0)
    {
        printf("The square of %d is %d\n", i, i*i);
    }
}
return 0;
}
