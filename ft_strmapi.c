/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:21:24 by etisha            #+#    #+#             */
/*   Updated: 2021/10/15 19:21:26 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len_s;
	char	*ret_strmapi;

	if (f == NULL || s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	ret_strmapi = (char *)malloc(sizeof(char) * (len_s + 1));
	if (ret_strmapi == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ret_strmapi[i] = f(i, s[i]);
		i++;
	}
	ret_strmapi[i] = '\0';
	return (ret_strmapi);
}
