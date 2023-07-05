#include <stdio.h>

int main()
{
    int end;
    printf("Enter how many iterations: ");
    scanf("%d", &end);
    int opp;
    for (int a = 0; a < end; a += 1)
    {
        opp = opp * 3 - a * 2;
    }
    printf("You got: %d\n", opp);
    return 0;
}
