/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Challenge02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <lakazzie@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 06:33:49 by lakazzie          #+#    #+#             */
/*   Updated: 2020/04/24 18:28:30 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strlen(char *str)
{
	int length;
	length = 0;
	while(str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int main(int argc, char **argv)
{
	int i;
	int a;
	i = 0;
	a = 0;
	
	if(argc == 3)
	{
		if(ft_strlen(argv[1]) > 1)
		{
			while((argv[1][i]) != (argv[2][a]))
			{
				i++;
			}
			ft_putchar(argv[1][i]);
			ft_putchar('\n');
			}
			if((ft_strlen(argv[2])) != 1)
			{
				ft_putstr("Please enter 1 char numnut. \n \n");
			}
			
		else if(ft_strlen(argv[1]) <= 1)
		{
			ft_putstr("ZERO\n");
		}
	}
	else
	{
		ft_putstr("\n \n \n");
	}
	return (0);
}