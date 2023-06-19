#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This program will assign a random number to the variable n
*        each time it is executed. Complete the source code in order to
*        print the last digit of the number stored in the variable n.
*        Return: always 0
**/
int main(void)
{
	int n, LastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastD = n % 10;	
	if (LastD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastD);
	}
	if (LastD == 0) 
	{
		printf("Last digit of %d is %d and is 0\n", n, LastD);
	}
	if (LastD < 6 && LastD != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastD);
	}
	return (0);
}
