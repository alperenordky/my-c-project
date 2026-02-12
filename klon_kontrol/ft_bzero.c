/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorduka <alorduka@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:37:22 by alorduka          #+#    #+#             */
/*   Updated: 2026/01/22 13:47:46 by alorduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void	*s, size_t	n)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		memset (ptr, 0, 8);
		i++;
		ptr++;
	}
}
