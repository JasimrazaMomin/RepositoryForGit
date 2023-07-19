#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_LIMIT 20 

bool input_checker_int (char arr[])
{
    for (int i = 0; i < strlen(arr)-1; i++){
        if ((int)arr[i] == 0 || (int)arr[i] == 1 ||(int)arr[i] == 2 ||(int)arr[i] == 3 ||(int)arr[i] == 4 ||(int)arr[i] == 5 ||(int)arr[i] == 6 ||(int)arr[i] == 7 ||(int)arr[i] == 8 ||(int)arr[i] == 9)
        {
            continue;
        }
        else 
        {
            return false;
        }
    }
    return true;
}

int main (void){

    char s[MAX_LIMIT];
    printf("Enter a number: ");
    scanf("%s",&s);
    bool checker = input_checker_int(s);
    if (checker){
        printf("Success!\n");
    }
    else {
        printf("Fail!\n");
    }
}