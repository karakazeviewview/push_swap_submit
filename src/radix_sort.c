/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatsuo <mmatsuo@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 05:38:06 by mmatsuo           #+#    #+#             */
/*   Updated: 2022/11/01 06:49:51 by mmatsuo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **stack_a, t_stack **stack_b, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (!is_sorted(*stack_a))
	{
		j = 0;
		k = 0;
		while (j < len)
		{
			if (!(((*stack_a)->index >> i) & 1))
			{
				pb(stack_a, stack_b);
				k++;
			}
			else
				ra(stack_a);
			j++;
		}
		while (k-- != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
