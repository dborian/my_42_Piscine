#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int nbr;
	int v;

	v = 0;
	nbr = 0;
	i = 0;
	while (str[i] != '\0' && v == 0)
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			v = 1;
			nbr = nbr * 10 + (str[i] - 48);
			i++;
		}
		i++;
	}
	return (nbr);
}

int	main(int argc, char **argv)
{
	printf("%d\n%d\n", ft_atoi(argv[1]), ft_atoi(argv[2]));
}
