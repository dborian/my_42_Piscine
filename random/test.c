#include <stdio.h>

int	main(void)
{
	int	i;
	char *str = "10000:twelve";

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	printf("%s\n", &str[i]);
	return (0);
}
