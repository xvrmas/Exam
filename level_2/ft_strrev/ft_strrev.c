#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	char	temp;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	len -= 1;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int	main()
{
	char	str[] = "Xavier Mas Garcia";
	char	*s;

	s = ft_strrev(str);
	printf("%s\n", s);
	return (0);	
}
