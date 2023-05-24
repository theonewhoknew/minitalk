#include "minitalk.h"
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>

int count_numbers(int number)
{
	int c;

	c = 0;
	while (number > 0)
	{	
		number /= 2;
		c++;
	}
	return (c);
}

int *to_binary(int number)
{	
	int c;
	int *binary;
	int i;

	i = 0;
	c = count_numbers(number);
	printf("c is %d\n", c);
	printf("number is %d\n", number);
	binary = (int *)malloc(sizeof (int) * c);
	while (i < c)
	{
		if (number % 2 == 0)
			binary[i] = 0;
		else
			binary[i] = 1;
		i++;
		number /= 2;
	}
	i = 0;
	ft_printf("before reverse\n");
	while (i < c)
	{	
		ft_printf("%d\n", binary[i]);
		i++;
	}
	ft_reverse_tab(binary, c);
	i = 0;
	ft_printf("after reverse\n");
	while (i < c)
	{	
		ft_printf("%d\n", binary[i]);
		i++;
	}
	return (binary);
}

int main(int argc, char *argv[])
{	
	int number;
	int *binary;
	int i;

	i = 0;
	if (argc == 1)
		return (0);
	//while (argv[2][i])
	//{
		number = argv[2][i];
		number = 97;
		binary = to_binary(number);
	//	i++;
	//}

	
	//kill(ft_atoi(argv[1]), SIGUSR1);
} 