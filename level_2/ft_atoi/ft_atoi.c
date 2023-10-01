#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;
	int	cont;

	i = 0;
	result = 0;
	sign = 1;
	cont = 0;
	//desplaçem la i tantes posicions per cada espai o salt de linea
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	//desplaçem la i per cada sigen + o - pero comprobem que 
	//nomes hi hagi un signe
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		cont++;
		i++;
	}
	//un cop tenim la i al principi dels numero entrem al bucle nomes
	//si hi ha un signe i si ls i es un numero
	while (cont <= 1 && str[i] >= '0' && str[i] <= '9')
	{
		//multipliquem per 10 i li sumem el valor de i
		//com es un bucle a cada iteracio li afegeix i
		result = result * 10 + str[i] - '0';
		i++;
	}
	//retornem sign que pot ser positiu o negatiu i el resultat
	return (sign * result);
}

int	main(int argc, char **argv)
{
	int res;
	
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else 
	{
		res = ft_atoi(argv[1]);
		printf("%d\n", res);
	}
	return (0);
}
