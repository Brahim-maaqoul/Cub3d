/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:40:54 by babkar            #+#    #+#             */
/*   Updated: 2023/01/25 14:12:17 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_window(t_mlx *mlx, t_game game)
{
	game.mlx.window_width = WINDOW_WIDTH;
	game.mlx.window_heigth = WINDOW_HEIGHT;
	game.mlx.window_width = fmin(game.mlx.window_width, 1920);
	game.mlx.window_heigth = fmin(game.mlx.window_heigth, 720);
	game.mlx.window_width = fmax(game.mlx.window_width, 50);
	game.mlx.window_heigth = fmax(game.mlx.window_heigth, 50);
	mlx->mlx = mlx_init();
	mlx->win = mlx_new_window(mlx->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "cub3d");
}
