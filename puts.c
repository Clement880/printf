#include <stdio.h>
/**
 * puts - prints atring
 *
 * @s: string
 *
 * Return: number of bytes
 */
int my_puts(const char *s)
{
	if (s == NULL)
	
	{
        
		return EOF;

	}
	fputs(s, stdout);
	
	putchar('\n');
	
	return 0;
}

