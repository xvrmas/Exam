#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*str == ' ' && (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	result;

	i  = 1;
	while (i < argc)
	{
		result = ft_atoi(argv[i]);
		printf("%d\n", result);
		i++;		
	}
	return (0);
}
