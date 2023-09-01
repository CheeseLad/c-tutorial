#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Enter your name: ");
    // char up to first space = scanf("%s", name);
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    return 0;
}
