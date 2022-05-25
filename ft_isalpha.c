/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:55:40 by etisha            #+#    #+#             */
/*   Updated: 2021/10/04 14:55:45 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*// функция проверяет буква или нет и возвращает 0 или 1
int	main(void)
{
	int		intisalpha;
	int		resultisalpha;

	intisalpha = '\0';
	resultisalpha = ft_isalpha(intisalpha);
	printf("%d\n", resultisalpha);
	resultisalpha = isalpha(intisalpha);
	printf("%d\n", resultisalpha);
	return (0);
}*/
