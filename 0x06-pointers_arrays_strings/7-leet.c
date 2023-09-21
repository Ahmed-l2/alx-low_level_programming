#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @c: input string
 *
 * Return: returns endcoded string
 */

char *leet(char *c)
{
	char leetMap[128];
	int i = 0;
	int l = 0;

	while (l < 128)
	{
		leetMap[l] = 0;
		l++;
	}

	leetMap['a'] = '4', leetMap['A'] = '4',
	leetMap['e'] = '3', leetMap['E'] = '3',
	leetMap['o'] = '0', leetMap['O'] = '0',
	leetMap['t'] = '7', leetMap['T'] = '7',
	leetMap['l'] = '1', leetMap['L'] = '1';

	do {
		if (leetMap[(unsigned char) c[i]] != 0)
		{
			c[i] = leetMap[(unsigned char) c[i]];
		}
		i++;
	} while (c[i]);

	return (c);
}
