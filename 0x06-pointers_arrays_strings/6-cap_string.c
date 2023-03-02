#include "main.h"

/**
 * cap_string - Capitalizes each word in a string.
 * @s: Pointer to string.
 *
 * Return: Pointer to updated string.
 */
char *cap_string(char *s)
{
	int i;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
		    || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
		    || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
		    || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
		    || s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
	}

	return (s);
}

