#include <stdio.h>
#include <string.h>

// Write a C program to read a password until it is correct. For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program. The correct password is 1234.

int main() {
int password;
int correct_password = 1234;

printf("Please enter a password : ");
scanf("%d", &password);

if (password != correct_password)
{
    printf("Wrong password");
}
else
{
    printf("Correct password");
}

return 0;
}
