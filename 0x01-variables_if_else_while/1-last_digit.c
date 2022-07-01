#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
*main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
int n, a;

srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
/* your code goes there */
printf("Last digit of %d is %d ", n, a);

if (a == 0)
{
printf("and is 0\n");
}
else if (a < 6)
{
printf("and is less than 6 and not 0\n");
}
else
{
printf("and is greater than 5\n");
}
return (0);
}
