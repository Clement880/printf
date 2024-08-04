#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/**printf("%c is a character\n", 'A');
	#printf("%d is an interger\n", 100);
	#int printed_char_num = printf("%s is my string string name\n", "Clement");
	#printf("The last print char number %d", printed_char_num);
	*/
	int printed_count = _my_printf("This %c\n", 'A' );
	printf("count = %d\n", printed_count);
	int p2 = _my_printf("Name %s\n", "ALX Task");
	printf("count2 = %d\n", p2);

	int p3 = _my_printf("saturday is aug %d\n", 4);
	printf("count3 = %d\n", p3);

	int p4 = _my_printf("%d\n", -12331);
	printf("count4 = %d\n", p4);

	int p5 = _my_printf("%d\n", 0);
	printf("count5 = %d\n", p5);

	int p6 = _my_printf("%s %s %d %c\n", "ALX", "is", 100, 'A');
	printf("count6 = %d\n", p6);

	return (0);
}	
