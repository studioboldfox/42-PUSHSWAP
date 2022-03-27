/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4bis_algo_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <agondard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:16:44 by agondard          #+#    #+#             */
/*   Updated: 2022/03/26 17:05:55 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*long_to_int(long int *a, t_data *data)
{
	int	*tmp;
	int	i;

	i = 0;
	tmp = malloc(sizeof(int) * data->size_tab);
	if (!tmp)
		return (0);
	while (i < data->size_tab)
	{
		tmp[i] = a[i];
		i++;
	}
	data->size_tab_a = data->size_tab;
	return (tmp);
}

int find_min(int *a, t_data *data)
{
	int i;
	int tmp;

	i = data->min;
	tmp = a[i];
	while (i < data->size_tab_a )
	{
		if (tmp > a[i])
			tmp = a[i];
		i++;
	}
	return (tmp);
}

int find_max(int *a, t_data *data)
{
	int i;
	int tmp;

	i = 0;
	tmp = a[i];
	while (i < data->size_tab_a )
	{
		if (tmp < a[i])
			tmp = a[i];
		i++;
	}
	return (tmp);
}
