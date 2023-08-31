#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int num = 5;
    printf("%d\n", num);
    num = 9; //error
    printf("%d", num);

    return 0;
}
