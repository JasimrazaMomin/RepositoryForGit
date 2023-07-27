#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int size = 8;
    char check[size];
    char p[] = "aaaaaaaa";
    char *some = &p;

    printf("%s\n", check);

    for (int j = 0; j < size; j++)
    {
        check[j] = 'a';
    }

    printf("%s\n", check);
    printf("%s\n", *some);
    if (strcmp(*some, check) == 0)
    {
        printf("It works\n");
    }
    else
    {
        printf("It doesnt work\n");
    }
}