#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void disp_rev_words(char *str);


int main(void)
{
	char s[] = "dort uc iki		bir";
	disp_rev_words(s);
	printf("\n");




	return 0;
}


void disp_rev_words(char* str)
{
	char *stop, * start;
	int i = 0;
	for (; str[i] != '\0'; i++)
		;
	while (i != -1)
	{
		if (str[i] == '\0')
		{
			while (str[i] != ' ' && str[i] != '\t')
				i--;
			stop = &str[i] + 1;
			printf("%s ", stop);
		}

		else
		{
			while (str[i] == ' '|| str[i] == '\t')
				i--;
			stop = &str[i];
			while (str[i] != ' ' && i != -1)
				i--;
			start = &str[i] + 1;
			for (start; start != stop + 1; start++)
				printf("%c", *(start));
			printf("%c", ' ');

		}
	}

}
