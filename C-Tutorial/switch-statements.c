#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'B';

    switch(grade){
    case 'A':
        printf("You did great! ");
        break;
    case 'B':
        printf("You did good! ");
        break;
    case 'C':
        printf("You did fine! ");
        break;
    case 'D':
        printf("You did bad! ");
        break;
    case 'F':
        printf("You failed! ");
        break;
    default : // Basically an else
        printf("Invalid Grade");
    }
    return 0;
}
