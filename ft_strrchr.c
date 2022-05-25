/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:03:38 by etisha            #+#    #+#             */
/*   Updated: 2021/10/06 19:03:43 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*r;

	i = 0;
	r = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			r = s + i;
		i++;
	}
	if (c == '\0')
	{
		r = s + i;
		return ((char *)r);
	}
	return ((char *)r);
}
/*// функция ищет последнее вхождение символа c в строке s, включая \0
int	main(void)
{
	char	sstrrchr[] = "0123333456789";
	char	simbolstrrchr = '3';
	char	*rstrrchr;

	rstrrchr = ft_strrchr(sstrrchr, simbolstrrchr);
	printf("ft_strrchr: %s\n", rstrrchr);
	rstrrchr = strrchr(sstrrchr, simbolstrrchr);
	printf("   strrchr: %s\n", rstrrchr);
	return (0);
}*/
