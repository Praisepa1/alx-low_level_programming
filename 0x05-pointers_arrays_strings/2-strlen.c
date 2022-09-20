#include "main.h"

/**
*_strlen -> funtion to get the length of a string
* @s: string pointer to passed this function
*Return: return the length of the string
*/
int _strlen(char *s);
int main ()
{
    char *s = hello world;
	int len;

	while (*s != '\0')
	{
		*s = *s + 1;
		len+=1;
	}
	return (len);
	printf("%d", len);
}
