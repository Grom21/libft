/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:34:28 by etisha            #+#    #+#             */
/*   Updated: 2021/10/04 17:34:35 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*//функция считает количество символов в строке
int	main(void)
{
	char	sstrlen[] = "12345";
	int		resultstrlen;

	sstrlen[3] = '\0';
	resultstrlen = ft_strlen(sstrlen);
	printf("%d\n", resultstrlen);
	resultstrlen = strlen(sstrlen);
	printf("%d\n", resultstrlen);
	return (0);
}*/
