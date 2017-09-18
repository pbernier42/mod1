/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 14:50:45 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/10 16:16:50 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab_fd(char **tab, int fd)
{
	int		i;

	i = 0;
	while (tab[i] || !tab[i][0])
		ft_putstr_fd(tab[i++], fd);
}