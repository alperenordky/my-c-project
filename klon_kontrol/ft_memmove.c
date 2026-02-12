/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorduka <alorduka@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:34:48 by alorduka          #+#    #+#             */
/*   Updated: 2026/01/22 15:44:43 by alorduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			i;

	i = n;
	ptr = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	if (dest == NULL || src == NULL)
	{
		return (0);
	}
	while (i > 0)
	{
		ptr2[i] = ptr[i];
		i++;
	}
	return (dest);
}
