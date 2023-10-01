#include <unistd.h>
#include <stdlib.h>

void	search_c(char *c)
{
	int	i;
	
	i = 0;
	while (c[i] != '\0')
		i++;
	if (i >= 2)
	{
		write(1, "\n", 1);
		exit(0);
	}
}

void	search_and_replace(char *str,char *search, char *replace)
{
	int	i;
	
	i = 0;
	search_c(search);
	search_c(replace);
	while (str[i] != '\0')
	{
		if (str[i] == *search)
			str[i] = *replace;
		write(1, &str[i], 1);
		i++;		
	}
}


int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}
