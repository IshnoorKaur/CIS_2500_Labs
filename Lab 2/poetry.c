#include <stdio.h>
#include <stdlib.h>
#define WORD_LENGTH 20 
#define LINE_LENGTH 100

int main(int argc, char *argv[])
{

    FILE *fPtr = fopen(argv[1], "r");
    char **pointer1;

    pointer1 = malloc(sizeof(char *));
    pointer1[0] = malloc(sizeof(char));

    char ch;

    int line = 0;
    int word = 0;
    int ch2 = 0;

    while (!feof(fPtr))
    {
        //gets the next character (an unsigned char) from the specified file
        ch = fgetc(fPtr);
        pointer1[line][ch2] = ch;
        ch2++;

        // realocte memmory dynamilcally
        pointer1[line] = realloc(pointer1[line], (ch2 +1) * sizeof(char));
    }

    //Output 
    /*printf("%d words on %d lines\n, word, line);
    */

    return 0;
}