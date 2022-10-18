#include <stdio.h>

void add_up(int *num);

int main(void)
{
	int num[] = {0, 5, 6, 7};
	int result = add_up(num);
	printf("%d\n", result);
}


void add_up(int *num)
{
	int i, sum = 0;
	num[i];
	for (int i = 0; num[i]; i++)
	{
		sum += num[i];
	}
	return (sum);

}
