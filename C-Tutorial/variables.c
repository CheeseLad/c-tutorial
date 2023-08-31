#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "Tom";
    int characterAge = 46;
    printf("Hey %s!\n", characterName);
    printf("He is %d\n", characterAge);

    characterAge = 60;
    printf("He likes the name %s\n", characterName);
    printf("But he does not like being %d\n", characterAge);
    return 0;
}
