/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:19:50 by loflavel          #+#    #+#             */
/*   Updated: 2021/12/23 23:54:57 by Loui :)          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: converts the initial portion of the string 
** pointed to by nptr to int OR: converts the string argument 
** str to an integer (type int)
** RETURN VALUE: the converted integral number as an int value.
** If no valid conversion could be performed, it returns zero. 
** *NOTE* Replaced by strtol */

/* const char* is a mutable pointer to an immutable character/string. 
** You cannot change the contents of the location(s) this pointer points to
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	minus;
	int	res;
	int	i;

	res = 0;
	minus = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		res = (res * 10) + (str[i] - '0');
		i++;//12b
	}
	return (res * minus);
}
