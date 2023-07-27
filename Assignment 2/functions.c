#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "constants.h"
#include "functions.h"

bool rightGuess (const char *randomWord, char checker[])//test in testing file using trace and various inputs
{   
    int i = 0; //initialize a counter variable
    while (*randomWord != '\0') //continue until you reach the end of the string
    {
        if (*randomWord != checker[i]) //compare the chars, if it is not the same, return false
        {
            return false;
        }
        i++; //increment counter and move pointer
        randomWord++;
    }
    return true; // return true since the word must be the same now
}

bool playWordGuessingGame(const char *randomWord)//getting answer each guess 1-5, getting it wrong from 1-5, 
{   
    printf("\n");//for formatting
    int attempts = 0;// initialize variables to track the number of attempts, guesses, and etc
    int counter = 0; //used to see if the user got the wrong guess or not
    char guess;
    int size = strlen(randomWord); //use since easier to type size 
    char checker_string[size]; // use a blank string and replace each elem with the guess until it matches the word

    for (int j = 0; j < size; j++)// make each character of the check string a - for outputting to the user
    {
        checker_string[j] = '-';
    }

    while (attempts < MAX_ATTEMPTS)// will work until you reach the max number of attempts
    {
        // ask user for input
        printf("Attempt #%d: ", 1 + attempts);
        scanf(" %c", &guess);

        for (int i = 0; i < size; i++) // go through each letter and compare to see if it is in the word
        {
            // compare each letter and print out the dashes. if they got it right print out the letter. if wrong change attempt

            if (guess == *(randomWord + i))    //compare the guess character to the pointer char 
            {
                checker_string[i] = guess;//change the check string and output to the user
                printf("%c ", checker_string[i]);
                counter++;//increment counter to let program know to not change the attempt
            }
            else
            {
                printf("%c ", checker_string[i]);//print out the - 
            }
        }

        if (counter == 0) // if no counter increase it means it is wrong so it prints out message
        {
            printf("\nIncorrect Guess Try Again!\n");
            attempts++;
        }
        else // got at least one char right so goes to next line for new input
        {
            printf("\n");
        }

        counter = 0;//reset counter for next go around

        
        if (rightGuess(randomWord,checker_string))// use the previously defined function to check the guess to the word
        {
            return true;//if it matches it returns true
        }
    }

    return false;//or else it returns false
}

bool playWordGuessingGameAutomatic(const char *randomWord, char **words, int numWords, int numSuggestion)
{//guess from 1-5, wrong from 1-5, wrong until 5 , wrong all the way
    printf("\nAutomatic Version has started.\n\n\n"); // let user know the automatic version has started
    int attempts = 0;
    int counter = 0; //initialize and declare my attempts, guesses and other useful variables
    char guess;
    // initialize and declare vars that i will use for the auto mode
    int num_words_printed = 0; //tracks the number of words printed to the user
    bool word_works = true; //checks if the word fits and saves it to an array
    bool auto_started = false; //checks if auto started so that it doesnt repeat itself
    int num_words_possible = 0;//tracks the number of all words that fit incase more than numSuggestion are present

    int size = strlen(randomWord);//easier to use size than repeat strlen

    char *words_to_print[numSuggestion]; //initialize the printing array which stores words to print

    char checker_string[size]; // use a blank string and replace each elem with the guess until it matches the word

    for (int j = 0; j < size; j++)//set each char in the check string to - making it easier to print
    {
        checker_string[j] = '-';
    }

    while (attempts < MAX_ATTEMPTS)//works until you reach max attempts then stops
    {
        //if on attempt number 5 and it has not already happened once, start the auto mode
        if (attempts == 4 && !auto_started)
        {
            for (int k = 0; k < numWords; k++)//this iterates through all the words once
            {
                if (strlen(words[k]) == size)//if the word is the right size it enters the if statement, if not, goes to next word
                {

                    for (int h = 0; words[k][h] != '\0'; h++) //goes through the word until it encounters the end character
                    {//increments h until you reach the end of the word

                        if (checker_string[h] != '-')//if the checker string still has a -, means not guessed and ignores comparison
                        {
                            if (checker_string[h] != words[k][h]) // if there is a character, it compares it to the word
                            {
                                word_works = false;//if it doesnt match, the word doesnt work and breaks out of loop
                                break;
                            }
                        }
                    }
                    if (word_works)//if the word works and there arent numSuggestion number of words printed, add the word to the printing array and increment both counters
                    {
                        if (num_words_printed < numSuggestion)
                        {
                        words_to_print[num_words_printed] = words[k];
                        num_words_printed++;//tracks the number of printed words
                        }
                        num_words_possible++;//tracks the number of possible words
                    }
                    word_works = true;//resets the variable for the next word
                }
                auto_started = true;//sets this to true to not trigger the if statement again for auto mode
            }

            printf("\nNumber of possible words: %d\n", num_words_possible);//prints out the number of possible words
            printf("Here is up to the first %d possible words\n\n", numSuggestion);//prints out the number of suggested words to print
            for (int y = 0; y < num_words_printed; y++)// iterates through the printing array and prints out the words in it
            {
                printf("%s,\n", words_to_print[y]);
            }
            printf("\n");//for formatting
        }
        printf("Attempt #%d: ", 1 + attempts);//print out attempt number to the user and ask for input
        scanf(" %c", &guess);

        for (int i = 0; i < size; i++) // go through each letter and compare to see if it is in the word
        {
            // compare each letter and print out the dashes. if they got it right print out the letter. if wrong change attempt

            if (guess == *(randomWord + i))//compares the guess to each letter in the word
            {
                checker_string[i] = guess;//if right change checker string at that index to that char and print it out
                printf("%c ", checker_string[i]);
                counter++;
            }
            else
            {
                printf("%c ", checker_string[i]);//print out rest of the word as -
            }
        }

        if (counter == 0) // if no counter increase it means it is wrong so it prints out message and increase attempt number
        {
            printf("\nIncorrect Guess Try Again!\n");
            attempts++;
        }
        else // got at least one char right so goes to next line for new input
        {
            printf("\n");
        }

        counter = 0;
        // reset counter to 0
        if (rightGuess(randomWord,checker_string))//use function to compare the check string and word
        {
            return true;//if function returns true meaning they are the same, returns true and they win
        }
    }

    return false;//else returns false and they lose
}