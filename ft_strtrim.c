/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:20:23 by etisha            #+#    #+#             */
/*   Updated: 2021/10/12 15:20:26 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_found_start_copy(char const *s1, char const *set)
{
	int	i;
	int	x;
	int	start;

	i = 0;
	start = 0;
	x = 0;
	while (s1[i] != '\0' && set[x] != '\0')
	{
		x = 0;
		while (set[x] != '\0')
		{
			if (s1[i] == set[x])
			{
				start++;
				break ;
			}
			x++;
		}
		i++;
	}
	return (start);
}

static int	ft_found_stop_copy(char const *s1, char const *set)
{
	int	i;
	int	x;
	int	stop;

	i = 0;
	while (s1[i] != '\0')
		i++;
	stop = i;
	i--;
	x = 0;
	while (i > 0 && set[x] != '\0')
	{
		x = 0;
		while (set[x] != '\0')
		{
			if (s1[i] == set[x])
			{
				stop--;
				break ;
			}
			x++;
		}
		i--;
	}
	return (stop);
}

static char	*ft_copy_s1_to_str(char *str, char const *s1, int start, int stop)
{
	int	i;

	i = 0;
	while (start < stop)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		start;
	int		stop;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_found_start_copy(s1, set);
	stop = ft_found_stop_copy(s1, set);
	len = ft_strlen(s1) - start - (ft_strlen(s1) - stop);
	if (len < 0)
		len = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str = ft_copy_s1_to_str(str, s1, start, stop);
	return (str);
}
/*// функция обрезает set в s1 и возвращает замолоченную обрезанную строку
int	main(void)
{
	const char	set[] = " \n\t";
	const char	s1[]= "  \t \t \n   \n\n\n\t";
	char		*res;

	res = ft_strtrim(s1, set);
	printf("%s", res);
	return (0);
}*/
