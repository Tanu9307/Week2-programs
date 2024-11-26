//  A program to check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>
int main() {
    char ch;
    printf("Give a character ");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90)
    {
        printf("The given character is a uppercase alphabet");
    }
    else if(ch>=97 && ch<=122)
    {
       printf("The given character is a lowercase alphabet");
    }
    return 0;
}