#include <stdio.h>
#include <conio.h>  // Needed for getch()

void main() {
    int numb, rev = 0, remain, original;

    clrscr();  // Clears the screen (specific to Turbo C)

    printf("Enter a number: ");
    scanf("%d", &numb);

    original = numb;  // Store the original number

    while (numb != 0) {
        remain = numb % 10;
        rev = rev * 10 + remain;
        numb = numb / 10;
    }

    if (original == rev) { 
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }

    getch();  // Waits for a key press before exiting
}