#include <unistd.h>

void	ft_putchar(char c, int len)
{
	while(len > 1)
	{
		write(1, &c, 1);
		len--;
	}
}

void	repeat(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a'  && *str <= 'z')
			ft_putchar(*str, *str + 1 - 'a');
		else if (*str >= 'A'  && *str <= 'Z')
			ft_putchar(*str, *str + 1 - 'A');
		write(1, str, 1);
		str++;			
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	repeat(argv[1]);
	write(1, "\n", 1);
	return (0);
}
