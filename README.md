#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[10];
    printf("What's your name:");
    scanf_s("%s", name);
    printf("Hi,%s,How are you?\n", name);

    system("pause");
    return 0;
}
# With-Mark
