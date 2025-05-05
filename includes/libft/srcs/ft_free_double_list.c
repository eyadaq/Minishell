/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_double_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:46:32 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/03/24 08:33:28 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * Frees a double list (a list of strings).
 * 
 * The function will loop through the list and free each string, then
 * free the list itself.
 * 
 * If the list is NULL, the function will simply return.
 * 
 * @param lst The double list to be freed.
 */
void	ft_free_double_list(char **lst)
{
	int	i;

	if (!lst)
		return ;
	i = 0;
	while (lst[i])
	{
		free(lst[i]);
		i++;
	}
	free(lst);
}
