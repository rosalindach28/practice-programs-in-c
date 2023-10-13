// program that reads a text file (word list)
// choose random word from list based on random index for the array of strings content
// this will be target word

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define LIST_SIZE 1000

int main(void)
{
    FILE *filePtr;

// content is an an array of strings (2d array) where each element contains a word
    char content[LIST_SIZE][8];
    char target[10]; // contains target word

// randomizes the list of words (array of strings)
    srand(time(NULL));
    int random = rand() % 1000;

    filePtr = fopen("5letterRandom.txt", "r");
    if (filePtr != NULL)
    {
        for (int i = 0; i < LIST_SIZE; i++)
        {
            fgets(content[i], LIST_SIZE, filePtr); // read whole list of words
        }
        // printf("%s\n", content[random]); //select random word
        strcpy(target, content[random]); // assign random word as target word
        printf("%s\n", target);

    }
    else
    {
        printf("unsuccessful"); // could not read file
    }
} // end of main
