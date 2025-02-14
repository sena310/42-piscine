/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onoru <onoru@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 23:06:20 by onoru             #+#    #+#             */
/*   Updated: 2025/02/14 23:28:54 by onoru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_ft(int *nbr)
{
		*nbr = 42;
}


#include <unistd.h>
#include <stdio.h>
void	ft_ft(int *nbr);

int main ()
{
		int n = -3;

		printf("Before calling ft_ft the value of n is: %d\n", n);
		ft_ft(&n);
		printf("After calling ft_ft the value of n is:  %d\n", n);

}
