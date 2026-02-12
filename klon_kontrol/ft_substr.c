/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorduka <alorduka@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:19:44 by alorduka          #+#    #+#             */
/*   Updated: 2026/02/12 17:20:15 by alorduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (start > ft_strlen(s))
	{
		ptr = (char *)malloc(sizeof(char));
		if (!ptr)
			return (0);
		*ptr = '\0';
	}
	else
	{
		if (ft_strlen(s) - start < len)
			len = ft_strlen(s) - start;
		ptr = (char *)malloc(sizeof(char) * (len + 1));
		if (!ptr)
			return (0);
		ft_strlcpy (ptr, (char *)(s + start), len);
		return (ptr);
	}
}
