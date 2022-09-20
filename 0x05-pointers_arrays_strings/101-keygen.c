#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * key_gen - password generator
 *
 * @N: length of the password
 *
 */

void key_gen(int N)
{
	int i;
	int r;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";

	char password[N];

	r = rand() % 4;

	for (i = 0; i < N; i++)
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
}



int main(void)
{
	int N = 12;

	key_gen(N);

	return (0);
}
