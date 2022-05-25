/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:35:12 by etisha            #+#    #+#             */
/*   Updated: 2021/10/07 18:35:14 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_run_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
	|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int				i;
	long long int	result;
	int				minus;

	i = ft_run_spaces(str);
	minus = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result * minus > 2147483647)
			return (-1);
		if (result * minus < -2147483648)
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * minus);
}
/*// функция атои - преобразует строку в инт или возвращает 0
int	main(void)
{
	char	catoi[] = "\t\n\r\v\f  469 \n";
	int		ratoi;

	ratoi = ft_atoi(catoi);
	printf("tf_atoi: %d\n", ratoi);
	ratoi = atoi(catoi);
	printf("   atoi: %d\n", ratoi);
	return (0);
}*/
