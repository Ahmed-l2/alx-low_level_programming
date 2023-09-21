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

	for (int i = 0; i < 128; i++)
	{
		leetMap[i] = 0;
	}

	leetMap['a'] = '4', leetMap['A'] = '4',
	leetMap['e'] = '3', leetMap['E'] = '3',
	leetMap['o'] = '0', leetMap['O'] = '0',
	leetMap['t'] = '7', leetMap['T'] = '7',
	leetMap['l'] = '1', leetMap['L'] = '1';

	do {
		if (leetMap[c[i]] != 0)
		{
			c[i] = leetMap[c[i]];
		}
		i++;
	} while (c[i]);

	return (c);
}
