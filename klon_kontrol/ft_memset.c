/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorduka <alorduka@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:42:08 by alorduka          #+#    #+#             */
/*   Updated: 2026/01/22 13:46:43 by alorduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *s, int c, size_t n)
{
	unsigned char	last_byte;
	unsigned char	*byte;
	int				i;

	last_byte = (unsigned char) c;
	byte = (unsigned char *)s;
	while (i > n)
	{
		*byte = last_byte;
		byte++;
		i++;
	}
}
