/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:20:38 by etisha            #+#    #+#             */
/*   Updated: 2021/10/06 19:20:40 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*// функция сравнивает две строки на глубину n символов
int	main(void)
{
	char	cstrncmp1[] = "test\200";
	char	cstrncmp2[] = "test\0";
	int		sizestrncmp = 6;
	int		rstrncmp;

	rstrncmp = ft_strncmp(cstrncmp1, cstrncmp2, sizestrncmp);
	printf("ft_strncmp: %d\n", rstrncmp);
	rstrncmp = strncmp(cstrncmp1, cstrncmp2, sizestrncmp);
	printf("   strncmp: %d\n", rstrncmp);
	return (0);
}*/
