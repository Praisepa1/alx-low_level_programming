#include "main.h"

/**
*_strlen -> funtion to get the length of a string
* @s: string pointer to passed this function
*Return: return the length of the string
*/
int _strlen(char *s);
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
