#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("John", 45);
    sayHi("Joe", 51);
    sayHi("Jim", 62);
    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}
