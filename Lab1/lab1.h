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
