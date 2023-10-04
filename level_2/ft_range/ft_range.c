#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int	i;
	int	*str;
	int	j;
	

	i  = 0;
	j = abs((end -start) + 1);
	str = (int *)malloc(sizeof(int) * j);
	if (!str)
		return (0);
	i = 0;
	while (i <= j)
	{
		if (start < end)
		{
			str[i] = start;
			start++;
			i++;
		}
		else
		{
			str[i] = start;
                	start--;
                	i++;
		}		
	}
	return (str);
}

int	main()
{
	int	start;
	int	end;
	int	*res;
	int	i;
	
	start = 10;
	end = 700;
	i  = 0;
	res = ft_range(start, end);
	while (start <= end)
	{
		printf("%d ", res[i]);
		i++;
		start++;
	}

}
