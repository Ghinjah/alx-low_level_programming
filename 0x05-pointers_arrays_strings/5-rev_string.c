#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
	char s[10] = "My School";

	cout << "%s\n" << s;
	rev_string(s);
	cout << "%s\n" << s;
	return (0);
}
