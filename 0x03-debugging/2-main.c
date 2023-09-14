#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 435345;
        b = -234234;
        c = 3242656;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
