#include "main.h"

/**
 * _strcat - append two strings.
 * @dest: string destination.
 * @src: string input.
 * Return: destination.
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		p++;

	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';

	return (dest);
}

/**
 * _strcmp - Compare two strings.
 * @s1: first string to compare.
 * @s2: seconde string to compare.
 * Return: 0 if *s1 and *s2 are equal,
 * -1 if *s1 is less than *s2, 1 if *s1 is greater than *s2.
 */
int _strcmp(char *s1, char *s2)
{
	int counter = 0, comparison = 0;

	while (s1[counter] && s2[counter])
	{
		if (s1[counter] != s2[counter])
		{
			comparison = s1[counter] - s2[counter];
			break;
		}
		counter++;
	}

	return (comparison);
}

/**
 * _strstr - Locate a substring.
 * @environ: string in which to look at.
 * @path: substring to find.
 * Return: 1 on success, 0 on failure.
 */
int _strstr(char *environ, char *path)
{
	char *env = environ;
	char *_path = path;

	environ = env;

	while (*_path != '\0' && *env == *_path)
	{
		env++, _path++;
		if (*_path == '\0')
			return (1);
	}

	return (0);
}

