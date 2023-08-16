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

// Prototypes
void saveEmployees(Employees[NUM_EMP], int c, char[SIZE]);
int loadEmployees(Employees[NUM_EMP], char[SIZE]);

int main(int argc, int *argv[])
{
    int c;
    int i = 0;
    char dep[SIZE];

    // declaring employee worker
    Employees worker[NUM_EMP];

    strcpy(worker[i].fname, "Smile");
    strcpy(worker[i].lname, "LASTNAME");
    stcpy(worker[i].id, "89898");
    strcpy(worker[i].dependents[0], "ghg");
    strcpy(worker[i].dependents[1], "seconf");
    strcpy(worker[i].dependents[2], "third");

    /*
        for (int i = 0; i < 3; i++)
        {

            // first name of the employee
            printf("Enter the first name: ");
            scanf("%s", worker[i].fname);

            // last name of the employee
            printf("Enter the last name: ");
            scanf("%s", worker[i].lname);

            // employee id (integer)
            printf("Enter the id number: ");
            scanf("%d", &worker[i].id);

            // enter the employee dependents
            printf("Employee dependents: ");
            scanf("%s", worker[i].dependents[0]);
            scanf("%s", worker[i].dependents[1]);
            scanf("%s", worker[i].dependents[2]);
        } */

    // calling the function to save information in a text file
    saveEmployees(worker, c, argv[1]);

    // prints that the file was saved successfully
    printf("The information of employees is saved in a file.\n");

    // calls the function to load the employees record
    loadEmployees(worker, argv[1]);

    return 0;
}
