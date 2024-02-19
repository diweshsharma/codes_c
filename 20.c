//WAP in C to display the multiplication table of a number up to 30 multiples. First 10 multiples must be displayed with the help of forloop, second 10 multiples must be displayed with the help of while loop and last 10 multiples must be displayed with the help do while loop.
#include <stdio.h>
int main()
{
    int num, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &num);
    // for loop for first 10 multiples
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    // while loop for next 10 multiples
    j = 11;
    while (j <= 20)
    {
        printf("%d x %d = %d\n", num, j, num * j);
        j++;
    }
    // do while loop for last 10 multiples
    k = 21;
    do
    {
        printf("%d x %d = %d\n", num, k, num * k);
        k++;
    } while (k <= 30);
    return 0;
}
