#include <stdio.h>
/**
 * main - Write a program that prints the alphabet
 * in lowercase, followed by a new line.
 * Return: always 0
 */
	int main(void)
{
	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
	putchar (lowercase);
	}

	putchar ('\n');
	return (0);

}

