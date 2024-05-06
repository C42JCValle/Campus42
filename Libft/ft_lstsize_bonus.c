/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:19:02 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/05/06 13:47:00 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 1;
    if (!lst)
        return (0);
    while (lst->next != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);        
}
