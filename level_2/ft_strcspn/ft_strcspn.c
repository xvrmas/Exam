#include <stdio.h>
#include <string.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int main() 
{
	const char *str1 = "abc12346de6f56";
	const char *str2 = "5643";
	size_t len = strcspn(str1, str2);
	size_t len2 = ft_strcspn(str1, str2);
	printf("La longitud de la subcadena1 es: %zu\n", len);
	printf("La longitud de la subcadena2 es: %zu\n", len2);
	return (0);
}

