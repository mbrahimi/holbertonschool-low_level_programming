#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* print_alphabet - a function that prints the alphabet, in lowercase
* Return: Always 0 (Succes)
*/
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
putchar('\n');
}
