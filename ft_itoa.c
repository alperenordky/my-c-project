#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	bsmk (int c, int sign)
{
	int i;

	i = 0;
	if (c == 0)
		return (0);
	while (c > 0)
	{
		i++;
		c = c / 10;
	}
	if (sign == -1)
		i++;
	return (i);
}

void	atama(char *ptr, int a, int len, int sign)
{
	if (len >= 0)
	{
		ptr[len] = (a % 10) + '0';
		atama (ptr, a / 10, len - 1, sign);
	}
	if (sign == -1)
	{
		ptr[0] = '-';
	}
}

char	*ft_itoa(int a)
{
	int	sign;
	int	len;
	char			*ptr;

	sign = 1;
	if (a == -2147483648)
	{
		ptr = (char *)malloc(sizeof(char) * 12);
		if (!ptr)
			return (0);
		ft_strlcpy (ptr, "-2147483648", 12);
		return (ptr);
	}
	if (a < 0)
		sign = -1;
	a = a * -1;
	len = bsmk (a, sign);
	ptr[len] = '\0';
	atama (ptr, a, len - 1, sign);
	return (ptr);
}
