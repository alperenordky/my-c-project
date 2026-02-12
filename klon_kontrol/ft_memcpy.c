/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorduka <alorduka@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:57:13 by alorduka          #+#    #+#             */
/*   Updated: 2026/02/12 18:11:33 by alorduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	if ((dest == NULL) || (src == NULL))
	{
		return (0);
	}
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	while (i < n)
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	return (dest);
}
