#include <stdio.h>
#include <string.h>

// Write a C program that reads an integer and find all its divisor.

int main() {
// Declaring variable with their type
int i;
int number;

// I/O

printf("Enter a number : ");
scanf("%d", &number);

printf("The divisors are the followings : ", number);
// for loop
for ( i = 1; i <=number; i++)
{
    if ((number%i) == 0)
    {
        printf("%d\n", i);
    }
}
return 0;
}