
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
//    std::cout << "Hello World!\n";
    char name[10];
    printf("What's your name:");
//    scanf_s("%s", name);
    scanf("%s", name);

    printf("Hi, %s, How you you?\n", name);
//    system("pause");
    printf("just another question to avoid closing...");
    return 0;
}
