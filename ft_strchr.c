/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:35:05 by etisha            #+#    #+#             */
/*   Updated: 2021/10/06 17:35:09 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != (unsigned char)c && s[i] != '\0')
		i++;
	if (s[i] == '\0' && c != '\0')
		return (NULL);
	else
		return ((char *)s + i);
}
/*// функция ищет первое вхождение символа c в строке s включая \0
int	main(void)
{
	char	sstrchr[] = "0123456789";
	char	simbol = '\0';
	char	*rstrchr;

	rstrchr = ft_strchr(sstrchr, simbol);
	printf("%ld\n", rstrchr - sstrchr + 1);
	rstrchr = strchr(sstrchr, simbol);
	printf("%ld\n", rstrchr - sstrchr + 1);
	return (0);
}*/
