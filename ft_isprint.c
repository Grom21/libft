/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:37:42 by etisha            #+#    #+#             */
/*   Updated: 2021/10/04 16:37:44 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*// функция проверяет печатаемый ли символ
int	main(void)
{
	char	cisprint;
	int		resultisprint;

	cisprint = '\0';
	resultisprint = ft_isprint(cisprint);
	printf("%d\n", resultisprint);
	resultisprint = isprint(cisprint);
	printf("%d\n", resultisprint);
	return (0);
}*/
