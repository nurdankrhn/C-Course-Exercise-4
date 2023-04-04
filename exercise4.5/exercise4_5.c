#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *erase_char(char *str, int ch);


int main(void)
{
	char s[] = "ankara sakarya";
	erase_char(s, 'a');
	puts(s);




	return 0;
}


char *erase_char(char *str, int ch)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == ch)
			for(int k=i, j=i+1; str[k] != '\0'; j++, k++)
				str[k] = str[j];


	return str;



}
