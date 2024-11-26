// A program to check the input character is an alphabet, digit or special character

#include <stdio.h>
int main() {
    char ch;
    printf("Give an input character ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        printf("The given input character is an Alphabet");
    }
     else if (ch>='0' && ch<='9')
    {
        printf("The given input character is a Digit");
    }
    else
    {
        printf("The given input value is a special character");
    }
    return 0;
}