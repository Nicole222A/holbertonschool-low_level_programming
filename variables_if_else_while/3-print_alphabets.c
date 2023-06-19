#include <stdio.h>
/**
 * main -Write a program that prints the
 * alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: always 0
 **/
int main(void)
{
	int lowercase;
	int uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar (lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar (uppercase);
	}
	putchar ('\n');
	return (0);
}
