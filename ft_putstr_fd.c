/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:02:32 by loflavel          #+#    #+#             */
/*   Updated: 2021/07/22 04:37:43 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #1. The string to output.
* #2. The file descriptor on which to write*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
