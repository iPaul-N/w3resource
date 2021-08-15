#include <stdio.h>
#include <string.h>

// Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum. 

int main() {

// Declaring variable 
   int a;
   int b;
   int sum;
// Input and output
    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Enter a number : ");
    scanf("%d", &b);

sum = a + b;

printf("The sum is %d", sum);

if (a == b)
{
    printf("\nThe triple of the sum is %d : ", sum * 3);
}
   return 0;
}
