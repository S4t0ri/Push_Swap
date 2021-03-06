/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satori <satori@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 23:21:30 by mrojas-e          #+#    #+#             */
/*   Updated: 2021/12/20 15:51:22 by satori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*====Rotate functions====*/

void	ft_rotate(t_Ouroboros **snake_head)
{
	*snake_head = (*snake_head)->next;
	return ;
}

void	ft_rotate_a(t_Ouroboros **a, __attribute__ ((unused)) t_Ouroboros **b)
{
	ft_rotate(a);
	ft_putstr_fd("ra\n", 1);
}

void	ft_rotate_b(__attribute__ ((unused)) t_Ouroboros **a, t_Ouroboros **b)
{
	ft_rotate(b);
	ft_putstr_fd("rb\n", 1);
}

void	ft_rotate_both(t_Ouroboros **a, t_Ouroboros **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putstr_fd("rr\n", 1);
}
