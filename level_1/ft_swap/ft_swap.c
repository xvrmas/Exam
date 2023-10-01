#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int	a;
	int	b;
	int	*j;
	int	*k;
	
	a = 10;
	b = 2000000;
	j = &a;
	k = &b;
	printf("a = %d\nb = %d\n", a, b);
	ft_swap(j,k);
	printf("-----------------------------\n");
	printf("a = %d\nb = %d\n", a, b);
	return (0);
	
}

