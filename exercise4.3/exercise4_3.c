#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mode(int *pi, size_t size);


int main(void)
{
	int res;
	int array[10] = {3, 5, 6, 3, 5, 3, 7, 8, 7, 3};
	res=mode(array, 10);
	printf("%d\n", res);



	return 0;
}


int mode(int *pi, size_t size) //  2 2 2 4 4 4 6 6 7
{

	int temp = 0;
	int counter;
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		counter = 0;
		for (int j = 0; j < size; j++)
		{
			if (pi[i] == pi[j])
				counter++;
		}
		if (i == 0)
		{
			temp = counter;
			index = i;

		}
		else {
			if (counter > temp)
			{
				temp = counter;
				index = i;
			}

		}
	}
	
	return pi[index];
}
