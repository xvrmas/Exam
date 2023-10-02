#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;
		
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}


int main() {
    const char *str1 = "Helleo, World!";
    const char *str2 = "aiouel";

    char *result = strpbrk(str1, str2);
    char *result2 = ft_strpbrk(str1, str2);

    if (result != NULL)
    {
        printf("El primer caracter de str2 encontrado en str1 es: %c\n", *result);
    }
    else
    {
        printf("Ningun caracter de str2 encontrado en str1.\n");
    }

    if (result2 != NULL)
    {
        printf("El primer caracter de str2 encontrado en str1 es: %c\n", *result2);
    }
    else
    {
        printf("Ningun caracter de str2 encontrado en str1.\n");
    }

    return 0;
}
