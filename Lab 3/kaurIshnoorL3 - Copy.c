#include <stdio.h>
#include <time.h>

// prototypes
int iterativeFibonacci(int n);
int recursiveFibonacci(int n);
int iterativeSumNOdd(int n);
int recursiveSumNOdd(int n);

int main()
{

    // variables
    int value;
    int stars;

    int fun1;
    int fun2;
    int fun3;
    int fun4;

    int i;

    printf("\n");

    // User enters a value
    printf("Enter an input value: ");
    scanf("%d", &value);

    printf("\n");

    // Print statement - line of stars
    stars = 1;
    while (stars <= 50)
    {
        printf("*");
        stars = stars + 1;
    }

    printf("\n");

    // The loop below displays the n number of odd numbers
    printf("Sum of: ");

    printf("1");

    for (i = 1; i <= value; i++)
    {
        printf(" + %d ", 2 * i - 1);
    }
    printf("\n");

    // The code below finds the execution time of a C program
    double timeElapsed = 0.0;

    clock_t begin;
    clock_t end;

    begin = clock();

    // Function 3 call
    fun3 = iterativeSumNOdd(value);
    printf("Using Iteration: %d \n", fun3);

    for (int j = 0; j < 1000000; j++)
    {
    }

    end = clock();

    /*Calculate the elapsed time by finding defference (end - begin)
    and divide the difference by CLOCKS_PER_SEC to convert to seconds */

    timeElapsed += ((double)(end - begin) / CLOCKS_PER_SEC);
    printf("Time elpased for iteratuve sum is %lf seconds \n", timeElapsed);

    printf("\n");

    /*// Function 3 call
    fun3 = iterativeSumNOdd(value);
    printf("Using Iteration: %d \n", fun3); */

    // Function 4 call
    fun4 = recursiveSumNOdd(value);
    printf("Using Recursion: %d \n", fun4);

    // Print statement - line of stars
    stars = 1;
    while (stars <= 50)
    {
        printf("*");
        stars = stars + 1;
    }

    printf("\n");

    // Function 1 call
    fun1 = iterativeFibonacci(value);
    printf("Iteratively, Fibonacci(%d): %d \n", value, fun1);

    // Function 2 call
    fun2 = recursiveFibonacci(value);
    printf("Recursively, Fibonacci(%d): %d \n", value, fun2);

    // Print statement - line of stars
    stars = 1;
    while (stars <= 50)
    {
        printf("*");
        stars = stars + 1;
    }

    printf("\n");

    return 0;
}

// Function 1 - This function finds and returns the nth Fibonacci number using iteration (ie, using loops)
int iterativeFibonacci(int n)
{

    int i;
    int oneBack;
    int twoBack;
    int currentNum;

    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        oneBack = 1;
        twoBack = 0;

        for (i = 2; i <= n; i++)
        {
            currentNum = twoBack + oneBack;
            twoBack = oneBack;
            oneBack = currentNum;
        }
    }

    return currentNum;
}

// Function 2 - This function finds and returns the nth Fibonacci number using recursion
int recursiveFibonacci(int n)
{

    int recFib = 0;

    // terminate the function - base case
    if (n <= 0)
    {
        // 0! = 1
        return 0;
    }
    if (n == 1)
    {
        // 1! = 1
        return 1;
    }
    // recursive case
    else
    {
        recFib = recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
    }

    return recFib;
}

// Function 3 - This function finds and returns the sum of n odd numbers using iteration (ie, using loops)
int iterativeSumNOdd(int n)
{

    int i = 0;
    int num = 1;
    int sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += num;
        num += 2;
    }
    return sum;
}

// Function 4 - This function finds and returns the sum of n odd numbers using recursion
int recursiveSumNOdd(int n)
{
    if (n == 1)
    {
        // Base case- Sum of the first odd int is 1. So return 1
        return 1;
    }
    else
    {
        return (2 * n - 1) + recursiveSumNOdd(n - 1);
    }
}