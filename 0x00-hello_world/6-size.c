#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;   
int intType;
long int longType   
long long int longlongtype;
float floatType;

printf("Size of char: %zu bytes\n", sizeof(intType));
printf("Size of int: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n", sizeof(longType));
printf("Size of long long int: %zu bytes\n", sizeof(longlongType));
printf("Size of float: %zu byte\n", sizeof(charType));
return (0);
}
