/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:50:26 by etisha            #+#    #+#             */
/*   Updated: 2021/10/09 21:50:31 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	len_s;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		dst = (char *)malloc(sizeof(char) * 1);
		if (dst == NULL)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	if (ft_strlen(s) > len)
		dst = (char *)malloc(sizeof(char) * (len + 1));
	else
		dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dst == NULL)
		return (NULL);
	len_s = ft_strlcpy(dst, (s + start), len + 1);
	dst[len_s + 1] = '\0';
	return (dst);
}
