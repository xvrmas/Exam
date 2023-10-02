#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int	i;
	int	len;
	char	*s;
	
	i  = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	s = (char *)malloc(sizeof(char) * len + 1);
	if (!s)
	{
		free(s);
		return (0);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = 0;
	return (s);	
}

int	main(int argc, char *argv[])
{
	int	i;
	char	*str;

	i = 1;
	while (i < argc)
	{
		str = ft_strdup(argv[i]);
		printf("%s", str);
		i++;
	}
	printf("\n");
	return (0);
}
