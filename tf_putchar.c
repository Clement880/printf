#include "main.h"
/**
 * tf_putchar - prints a charater
 * 
 * @c: char input
 * 
 * Return 1
 */
int tf_putchar(char c)
{
	return (write(1, &c, 1));
}
