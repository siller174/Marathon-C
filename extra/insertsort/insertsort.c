#include <stdio.h>
#define LIST_SIZE 7

int		main(int argc, char **argv)
{
	int i;
	int j;
	int temp;
	int key;
	int list[LIST_SIZE] = {1, 3, 4, 8, 9 , 13};

	i = 1;
	while (i < LIST_SIZE)
	{
		key = list[i];
		j = i - 1;
		while (j >= 0 && list[j] > key)
		{
			list[j + 1] = list[j];
			j--;
		}
		list[j + 1] = key;
		i++;
	}
	i = 0;
	while (i < LIST_SIZE)
		printf("%d ", list[i++]);

}
