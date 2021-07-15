#include <stdio.h>
#include <string.h>

// Write a C program that accepts three integers and find the maximum of three.

int main() {
   int x;
   int y;
   int z;
   printf("Enter a number : ");
   scanf("%d", &x);
   printf("Enter a number : ");
   scanf("%d", &y);
   printf("Enter a number : ");
   scanf("%d", &z);

   if (x > y && x > z)
   {
      printf("The biggest number is %d", x);
   }
   else if (y > x && y > z)
   {
   printf("The biggest number is %d", y);
   }
   else
   {
      printf("The biggest number is %d", z);
   }
   return 0;
}