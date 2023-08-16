#include <stdio.h>
#include <stdlib.h>
//#define WORD_LENGTH 20 
//#define LINE_LENGTH 100

int main(int argc, char *argv[])
{
   //reads the txt file 
    FILE *fPtr = fopen(argv[1], "r");

    //pointers 
    char **pointer1;

    //initialize space 
    pointer1 = malloc(sizeof(char *));
    pointer1[0] = malloc(sizeof(char));

    //variables 
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

        //counts words after eachh space
        if(ch == ' ') {
        word++;
        }
        //adds the number of words and lines for each line when there is \n
        if (ch == '\n'|| ch =='.') {
        ch2 = 0;
        word++;
        line++;
        
        //reallocate for line
        pointer1 = realloc(pointer1, sizeof(char *) * (line + 1));
        pointer1[line] = malloc(sizeof (char)); 

        }
}
        //free pointer
        for (int i = 0; i < line; i++) {
                free(pointer1[i]);
        }

        free(pointer1); 


    //Output
        //prints the number of words
        printf("\n"); 
        printf("%d word", word);
        if(word > 1) {
                printf("s");
        }

        //prints the number of lines
        printf("   %d line", line);
        if(line > 1) {
                printf("s");
        }

        printf("\n"); 

    return 0;
}


