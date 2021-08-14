#include <stdio.h>
#include <string.h>

// Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3.

int main() {

int i;
int number;

printf("Enter a number : ");
scanf("%d", &number);

for ( i = 1; i <=100; i++)
{
    if ((i%number) == 3)
    {
        printf("%d\n", i);
    }   
}
   return 0;
}
