#include <unistd.h>
#include "main.h"
/**
 * main - entry point of the program
 *
 * description of using prototype functions
 *
 * return: always 0 (successful execution)
 *
 */
int main(void)
{
	char name[8] = "_putchar";
	int y;

	for (y = 0; y < 9; y++)
		_putchar(name[y]);
	_putchar('\n');

	return (0);
}
