#include <stdio.h>
#include <string.h>

// Write a C program that read 5 numbers and sum of all odd values between them.

int main() {

    int i;
    int number;
    int sum = 0;
    for ( i = 0; i <=5; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &number);

    if ((number%2) != 0)
    {
        sum+=number;
    }
    
    }

printf("The sum is %d : ", sum);
   return 0;
}
