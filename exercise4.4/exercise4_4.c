#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* swap_words(char* str);


int main(void)
{
	char array[] = "yildizim kutup";
	swap_words(array);
	printf("%s\n", array);
	


	return 0;
}


char *swap_words(char* str)
{
	char *start, *stop, *temp;
	int i=0;
	for (; str[i] != ' '; i++)
		;
	start = &str[i];
	temp = (char*)malloc((start - str)+2);
	temp[0] = ' ';
	int j=0;
	for (j; str[j] != ' '; j++)
		temp[j+1] = str[j];
	temp[j + 1] = '\0';

	while (str[i] != '\0')
		i++;
	stop = &str[i];
	memmove(str, start + 1, stop - start);

	//strncpy(str, start + 1, stop - start);
	strcat(str, temp);
	free(temp);
	




		return str;

}
