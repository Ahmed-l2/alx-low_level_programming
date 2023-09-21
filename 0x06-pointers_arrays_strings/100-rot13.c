#include "main.h"

/**
 * rot13 - function that encodes given string using rot13
 *
 * @c: given string
 *
 * Return: encoded string
 */

char *rot13(char *c)
{
	char leetMap[128];
	int i = 0;

	while (i < 128)
	{
		leetMap[i] = 0;
		i++;
	}
leetMap['a'] = 'n', leetMap['A'] = 'N', leetMap['b'] = 'o', leetMap['B'] = 'O',
leetMap['c'] = 'p', leetMap['C'] = 'P', leetMap['d'] = 'q', leetMap['D'] = 'Q',
leetMap['e'] = 'r', leetMap['E'] = 'R', leetMap['f'] = 's', leetMap['F'] = 'S',
leetMap['g'] = 't', leetMap['G'] = 'T', leetMap['h'] = 'u', leetMap['H'] = 'U',
leetMap['i'] = 'v', leetMap['I'] = 'V', leetMap['j'] = 'w', leetMap['J'] = 'W',
leetMap['k'] = 'x', leetMap['K'] = 'X', leetMap['l'] = 'y', leetMap['L'] = 'Y',
leetMap['m'] = 'z', leetMap['M'] = 'Z', leetMap['n'] = 'a', leetMap['N'] = 'A',
leetMap['o'] = 'b', leetMap['O'] = 'B', leetMap['p'] = 'c', leetMap['P'] = 'C',
leetMap['q'] = 'd', leetMap['Q'] = 'D', leetMap['r'] = 'e', leetMap['R'] = 'E',
leetMap['s'] = 'f', leetMap['S'] = 'F', leetMap['t'] = 'g', leetMap['T'] = 'G',
leetMap['u'] = 'h', leetMap['U'] = 'H', leetMap['v'] = 'i', leetMap['V'] = 'I',
leetMap['w'] = 'j', leetMap['W'] = 'J', leetMap['x'] = 'k', leetMap['X'] = 'K',
leetMap['y'] = 'l', leetMap['Y'] = 'L', leetMap['z'] = 'm', leetMap['Z'] = 'M';

	do {
		if (leetMap[c[i]] != 0)
		{
			c[i] = leetMap[c[i]];
		}
		i++;
	} while (c[i]);

	return (c);

}
