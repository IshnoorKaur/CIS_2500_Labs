#include <stdio.h>
#include <string.h>
#define SIZE 25
#define NUM_EMP 3

/* definition of an employee record*/
typedef struct employee
{
	char fname[20];
	char lname[20];
	int id;
	char dependents[3][20]; // assume that employees have exactly
	// 3 registered dependents
} Employees;

Employees worker[NUM_EMP];


// Prototypes
void saveEmployees(Employees[NUM_EMP], int c, char[SIZE]);
int loadEmployees(Employees[NUM_EMP], char[SIZE]);

void saveEmployees(Employees[NUM_EMP], int c, char[SIZE]) {

}


int loadEmployees(Employees[NUM_EMP], char[SIZE]);
/*
void saveEmployees(Employees worker[NUM_EMP], int c, char fname[SIZE])
{
    FILE *fPtr;
    fPtr = fopen(fname, "w");

    if (fPtr == NULL)
    {
        // file not created so exit
        printf("File doesn't exist!\n");
    }
    else
    {
        // stores the user input in file
        fgets(worker, c, fname);

        // writes the data to file
        fputs(worker, fPtr);

        // closes the file
        fclose(fPtr);

        // closing statement for user
        printf("File is created and saved!\n");
    }
}

int loadEmployees(Employees worker[NUM_EMP], char fname[SIZE])
{
    int i = 0;

    FILE *fPtr;

    fPtr = fopen(fname, "r");

    if (fPtr == NULL)
    {
        // file doesn't open
        printf("File doesn't exist\n");
    }
    else
    {
        while (!feof(fPtr))
        {
            fscanf(fPtr, "%s %s %d %s", worker[i].fname, worker[i].lname, &worker[i].id);

            for (int j = 0; i < 3; j++)
            {
                fscanf(fPtr, "%s", worker[i].dependents[j]);
            }
            i++;
        }
    }

    fclose(fPtr);

    return 0;
}
*/ 