#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{	char *msg = "and that piece of art is userful\" - Dora Korpar, 2015-10-19";
	write(STDOUT_FILENO, msg, 59);
	return (1);
}
