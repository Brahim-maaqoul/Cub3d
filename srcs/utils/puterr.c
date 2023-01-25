/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puterr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babkar <babkar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 01:25:29 by babkar            #+#    #+#             */
/*   Updated: 2023/01/24 00:24:57 by babkar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	puterr(char *str)
{
	ft_putstr_fd("Error\n", 2);
	if (str)
		ft_putstr_fd(str, 2);
	exit(1);
}