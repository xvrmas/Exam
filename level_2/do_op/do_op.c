#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	do_op(char *operador, char *signal, char *operando)
{
	if (signal[0] == '+')
		printf("%d\n", (atoi(operador)) + (atoi(operando)));
	else if (signal[0] == '-')
		printf("%d\n", (atoi(operador)) - (atoi(operando)));
	else if (signal[0] == '*')
		printf("%d\n", (atoi(operador)) * (atoi(operando)));
	else if (signal[0] == '/')
		printf("%d\n", (atoi(operador)) / (atoi(operando)));
	else if (signal[0] == '%')
		printf("%d\n:", (atoi(operador)) % (atoi(operando)));
	else
		write(1, "\n", 1);
}

int	comproba(char *str, int validate)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			validate = 1;
		else if (str[0] == '-')
			validate = 0;
		i++;
	}
	return (validate);
}

int main(int argc, char **argv)
{
	int	validate;
	int	revalidate;

	validate = 0;
	revalidate = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	validate = comproba(argv[1], validate);
	revalidate = comproba(argv[3], revalidate);
	if (validate == 0 && revalidate == 0)
		do_op(argv[1], argv[2], argv[3]);
	else
		write(1, "\n", 1);
	return (0);
}
