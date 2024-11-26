// A program to find the percentange and grade
#include <stdio.h>

int main() {
    int P,C,M,B,Com;
    printf("Give the marks of five subjects in the order of Physics, Chemistry, Biology, Mathematics and Computer ");
    scanf("%d %d %d %d %d ", &P, &C, &B, &M, &Com);
    float Per;
    Per=((P+C+M+B+Com)/5);
    printf("The percentage of the given marks is %f% ", Per);
    if(Per>= 90)
    printf(" and the grade is A grade");
    else if(Per>= 80 && Per<90)
    printf(" and the grade is B grade");
    else if(Per>= 70 && Per<80)
    printf(" and the grade is C grade");
    else if(Per>= 60 && Per<70)
    printf(" and the grade is D grade");
    else if(Per>= 40 && Per<60)
    printf(" and the grade is E grade");
    else
    printf(" and the grade is F grade");
    return 0;
}