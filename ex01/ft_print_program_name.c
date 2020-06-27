/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:51:59 by mumiller          #+#    #+#             */
/*   Updated: 2020/06/25 14:28:18 by mumiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

int	ft_print_program_name(int argc, char **argv)
{
	ft_putchar(*argv[0]);
	return (0);
}

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
