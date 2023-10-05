#include <unistd.h>

void inter(char *str1, char *str2)
{
	int	chars[256] = {0}; // Array para rastrear caracteres ya impresos (ASCII)
	int	i; 
	int	j;
	int	found;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		found = 0;
        	while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (chars[(unsigned char)str1[i]] == 0 && found == 1)
		{
			write(1, &str1[i], 1);
			chars[(unsigned char)str1[i]] = 1;
        	}
        	i++;
    	}
}


int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return (0);
}
