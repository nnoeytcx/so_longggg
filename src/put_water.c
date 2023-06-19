/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_water.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:39:19 by tpoungla          #+#    #+#             */
/*   Updated: 2023/06/20 03:46:56 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"
#include "solong.h"

void	ft_putwater(t_main *p, int n, int m)
{
	if ((n != 0 && m != 0)
		&& (n != p->data.size.y - 1 && m != p->data.size.x - 1))
	{
		if (p->data.map[n - 1][m] == '1' && p->data.map[n][m + 1] != '1'
			&& p->data.map[n][m - 1] != '1' && p->data.map[n + 1][m] != '1')
			ft_put_pic(p, "pic/3top.xpm", n * 32, m * 32);
		else if (p->data.map[n + 1][m] == '1' && p->data.map[n][m + 1] != '1'
			&& p->data.map[n][m - 1] != '1' && p->data.map[n - 1][m] != '1')
			ft_put_pic(p, "pic/3down.xpm", n * 32, m * 32);
		else if (p->data.map[n][m - 1] == '1' && p->data.map[n][m + 1] != '1'
			&& p->data.map[n + 1][m] != '1' && p->data.map[n - 1][m] != '1')
			ft_put_pic(p, "pic/3left.xpm", n * 32, m * 32);
		else if (p->data.map[n][m + 1] == '1' && p->data.map[n - 1][m] != '1'
			&& p->data.map[n][m - 1] != '1' && p->data.map[n + 1][m] != '1')
			ft_put_pic(p, "pic/3right.xpm", n * 32, m * 32);
		else if (p->data.map[n - 1][m] != '1' && p->data.map[n][m + 1] == '1'
			&& p->data.map[n][m - 1] == '1' && p->data.map[n + 1][m] == '1')
			ft_put_pic(p, "pic/1top.xpm", n * 32, m * 32);
		else if (p->data.map[n + 1][m] != '1' && p->data.map[n][m + 1] == '1'
			&& p->data.map[n][m - 1] == '1' && p->data.map[n - 1][m] == '1')
			ft_put_pic(p, "pic/1down.xpm", n * 32, m * 32);
		else if (p->data.map[n][m - 1] != '1' && p->data.map[n][m + 1] == '1'
			&& p->data.map[n + 1][m] == '1' && p->data.map[n - 1][m] == '1')
			ft_put_pic(p, "pic/1left.xpm", n * 32, m * 32);
		else if (p->data.map[n][m + 1] != '1' && p->data.map[n - 1][m] == '1'
			&& p->data.map[n][m - 1] == '1' && p->data.map[n + 1][m] == '1')
			ft_put_pic(p, "pic/1right.xpm", n * 32, m * 32);
		else if (p->data.map[n][m - 1] != '1' && p->data.map[n][m + 1] != '1'
			&& p->data.map[n + 1][m] == '1' && p->data.map[n - 1][m] == '1')
			ft_put_pic(p, "pic/2ver.xpm", n * 32, m * 32);
		else if (p->data.map[n + 1][m] != '1' && p->data.map[n - 1][m] != '1'
			&& p->data.map[n][m - 1] == '1' && p->data.map[n][m + 1] == '1')
			ft_put_pic(p, "pic/2hor.xpm", n * 32, m * 32);
		else if (p->data.map[n - 1][m] == '1' && p->data.map[n][m + 1] == '1'
			&& p->data.map[n + 1][m] != '1' && p->data.map[n][m - 1] != '1')
			ft_put_pic(p, "pic/2leftdown.xpm", n * 32, m * 32);
		else if (p->data.map[n - 1][m] == '1' && p->data.map[n][m - 1] == '1'
			&& p->data.map[n + 1][m] != '1' && p->data.map[n][m + 1] != '1')
			ft_put_pic(p, "pic/2rightdown.xpm", n * 32, m * 32);
		else if (p->data.map[n + 1][m] == '1' && p->data.map[n][m + 1] == '1'
			&& p->data.map[n - 1][m] != '1' && p->data.map[n][m - 1] != '1')
			ft_put_pic(p, "pic/2leftup.xpm", n * 32, m * 32);
		else if (p->data.map[n + 1][m] == '1' && p->data.map[n][m - 1] == '1'
			&& p->data.map[n - 1][m] != '1' && p->data.map[n][m + 1] != '1')
			ft_put_pic(p, "pic/2rightup.xpm", n * 32, m * 32);
		else if (p->data.map[n + 1][m] == '1' && p->data.map[n][m - 1] == '1'
			&& p->data.map[n - 1][m] == '1' && p->data.map[n][m + 1] == '1')
			ft_put_pic(p, "pic/water.xpm", n * 32, m * 32);
		else
			ft_put_pic(p, "pic/watertile.xpm", n * 32, m * 32);
	}
	else if ((n == 0 && m == 0) || (n == p->data.size.y - 1
			&& m == p->data.size.x - 1)
		|| (n == 0 && m == p->data.size.x - 1)
		|| (m == 0 && n == p->data.size.y - 1))
		ft_put_pic(p, "pic/water.xpm", n * 32, m * 32);
	else if ((n == 0 && m != 0) && p->data.map[n + 1][m] != '1')
		ft_put_pic(p, "pic/1down.xpm", n * 32, m * 32);
	else if ((m == 0 && n != 0) && p->data.map[n][m + 1] != '1')
		ft_put_pic(p, "pic/1right.xpm", n * 32, m * 32);
	else if ((m == p->data.size.x - 1) && p->data.map[n][m - 1] != '1')
		ft_put_pic(p, "pic/1left.xpm", n * 32, m * 32);
	else if ((n == p->data.size.y - 1) && p->data.map[n - 1][m] != '1')
		ft_put_pic(p, "pic/1top.xpm", n * 32, m * 32);
	else
		ft_put_pic(p, "pic/water.xpm", n * 32, m * 32);
}
