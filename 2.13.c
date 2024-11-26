// A program to check whether the given input character is an vowel or a consonant

#include <stdio.h>
int main() {
    char ch;
   printf("Give the input character ");
   scanf("%c", &ch);
   if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
   {
       printf("The given input character is a vowel");
   }
   else
   {
       printf("The given input character is a consonant");
   }
   return 0;
}