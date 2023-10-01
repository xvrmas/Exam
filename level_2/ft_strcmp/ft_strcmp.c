#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i  = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("dos argumentos, porfa");
		return (0);
	}
	res = ft_strcmp(argv[1], argv[2]);
	printf("%d\n", res);
	return (0);		
}
