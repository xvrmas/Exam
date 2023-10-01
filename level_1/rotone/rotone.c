#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'y') 
			|| (str[i] >= 'A' && str[i] <= 'Y'))
		{
			str[i] += 1;
			write(1, &str[i], 1);
		}
		else if (str[i] == 'z')
			write(1, "a", 1);
		else if (str[i] == 'Z')
			write(1, "A", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
