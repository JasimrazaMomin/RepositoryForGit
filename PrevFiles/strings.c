#include <stdio.h>
// Function to find the end of a string using a pointer with a for loop
int findEndOfString(const char *str)
{
    int n;
    for (n = 0; *str != '\0'; str++)// use *str to get the char at that point, use *(str+1) to get next or do str++ and *str
    {
        n++;
    } //n is the actual length, n-1 will give you the last character instead of the null character (\0)
    return n-1; // Return the last character of the string 
}
int main()
{
    // Single string
    const char myString[] = "Hello, this is a test string.";
    // Send the string as a pointer to the function to find the end
    int lastCharacter = findEndOfString(myString);
    printf("End of string: %c\n", myString[lastCharacter]);
}

// #include <stdio.h>
// // Function to find the end of a string using a pointer
// void findEndOfString(const char *str)
// {
//     while (*str != '\0')
//     {
//         str++; // Move the pointer to the next character
//     }
//     // Print the last character of the string
//     printf("End of string: %c\n", *(str - 1));
// }
// int main()
// {
//     // Single string
//     const char myString[] = "Hello, this is a test string.";//Hello, this is a test string.\0
//     // Send the string as a pointer to the function to find the end
//     findEndOfString(myString);
// }