#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *trim(char *str);

int main(void)
{
	char a[] = "	\t istanbul sakarya yalova	";
	trim(a);
	printf(":%s:", a);


	return 0;
}


char *trim(char *str) 
{
	int i=0;
	char null[]="0";
	char* start, *stop;
	while (str[i] ==' ' || str[i] =='\t' )
		i++;
	if (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
		return strcpy(str,&null);
	start = &str[i];
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	str[i+1] = '\0';
	stop = &str[i+1];
	
	strncpy(str, start, (stop - start) + 1);

	

	return str;
	
}
