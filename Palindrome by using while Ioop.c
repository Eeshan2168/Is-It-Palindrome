#include <stdio.h>
#include<conio.h>
void main() 
{
    int numb, rev = 0, remain, original;

    printf("Enter a number: ");
    scanf("%d", &numb);

    original = numb;  // Store the original number

    while (numb != 0) {
        remain = numb % 10;
        rev = rev * 10 + remain;
        numb = numb / 10;
    }

    if (original == rev) { // Compare with the original number
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }
}