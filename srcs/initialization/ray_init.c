/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:21:55 by babkar            #+#    #+#             */
/*   Updated: 2023/01/25 14:12:17 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

t_game	ray_init(t_game	map)
{
	if (map.player.view == 'N')
		map.ray.angle_speed = 120;
	if (map.player.view == 'S')
		map.ray.angle_speed = 30;
	if (map.player.view == 'E')
		map.ray.angle_speed = 165;
	if (map.player.view == 'W')
		map.ray.angle_speed = 75;
	map.ray.angle = map.ray.angle_speed * M_PI / 90;
	map.ray.nbr_rays = (WINDOW_WIDTH) / WALL_STRIP_WIDTH;
	return (map);
}
