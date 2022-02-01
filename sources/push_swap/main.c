/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:20:16 by ktroude           #+#    #+#             */
/*   Updated: 2022/01/19 17:05:27 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	main(int argc, char **argv)
{
	t_list *start_a;
	t_list *start_b;
	t_list *a;
	t_list *b;
	int	i;

	i = 1;
	
	start_b = NULL;
	b = NULL;
	check_error(argc, argv);
	if (argc == 2)
		start_a = parsing_a1(argv);
	if (argc > 2)
		start_a = parsing_a2(argc, argv);
	a = start_a;
	get_pos(start_a, a);
	a = start_a;
	while (a->next->next->next->next)
	{
		a = start_a;
		b = start_b;
		move_to_top(&start_a, &start_b, a, b);
		a = start_a;
		b = start_b;
//		oranise_rest_a(&start_a, &start_b, a, b);
//		check_n_push_b(&start_a, &start_b, a, b);
		push_b(&start_a, &start_b, a, b);
		a = start_a;
		b = start_b;

	}
		push_b(&start_a, &start_b, a, b);
		push_b(&start_a, &start_b, a, b);
		push_b(&start_a, &start_b, a, b);
		push_b(&start_a, &start_b, a, b);
		push_b(&start_a, &start_b, a, b);
	a = start_a;
	b = start_b;
	while (start_b->next)
	{
		a = start_a;
		b = start_b;
		get_max_nbr_b(&start_b, b);
		a = start_a;
		b = start_b;
		push_a(&start_a, &start_b, a , b);
//		if (a && a->next && a->index > a->next->index)
//			swap_a(&start_a, a);
		a = start_a;
		b = start_b;

	}
		push_a(&start_a, &start_b, a , b);
}
