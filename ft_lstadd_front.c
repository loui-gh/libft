/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loflavel <loflavel@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:09:55 by loflavel          #+#    #+#             */
/*   Updated: 2021/09/07 14:17:51 by loflavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*DESCRIPTION: Adds the element ’new’ at the beginning of the list.
#1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be added to the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
}
