#ifndef FUNCTIONS_H
#define FUNCTIONS_H


bool playWordGuessingGame(const char *randomWord);//declaration for each function from part a and b plus for my helper function
bool playWordGuessingGameAutomatic(const char *randomWord , char **words, int numWords, int numSuggestion);
bool rightGuess (const char *randomWord, char checker[]);

#endif