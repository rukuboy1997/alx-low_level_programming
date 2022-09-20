#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * key_gen - password generator
 *
 * return: Always zero(success)
 *
 */

int key_gen(void)
{
	int i;
	int r;

	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[12];

	srand((unsigned int)(time(NULL)));

	r = rand() % 4;

	for (i = 0; i < 12; i++)
	{
		if (r == 1)
		{
			password[i] = numbers[rand() % 10];
			r = rand() % 4;
			printf("%c", password[i]);
		}
		else if (r == 2)
		{
			password[i] = symbols[rand() % 8];
			r = rand() % 4;
			printf("%c", password[i]);
		}
		else if (r == 3)
		{
			password[i] = LETTER[rand() % 26];
			r = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			r = rand() % 4;
			printf("%c", password[i]);
		}
	}
	return (0);
}



int main(void)
{
	key_gen();

	return (0);
}
