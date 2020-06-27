/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:29:53 by mumiller          #+#    #+#             */
/*   Updated: 2020/06/25 14:38:22 by mumiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_print_params(int argc, char **argv)
{
  int i;

  i=-1;
  while(++i<argc)
  {
	  ft_putchar(*argv[i]);
  }
	return (0);
}

int		main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
