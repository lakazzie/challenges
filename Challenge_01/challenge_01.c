/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   challenge_01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <lakazzie@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 19:59:30 by lakazzie          #+#    #+#             */
/*   Updated: 2020/04/19 07:35:29 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ch)
{
	write (1, &ch, 1);
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

int main(int argc,char **argv)
{
	int ch;
	int shrt;
	ch = 1;
	shrt = 1;
	
	if(argc > 2)
	{
		while(ch < argc)
		{
			 if(ft_strlen(argv[shrt]) > ft_strlen(argv[ch]))
			{
				shrt = ch;
			}
			ch++;
		}	
	ft_putstr(argv[shrt]);
	}
	else if(argc == 2)
		{
			ft_putstr(argv[1]);
		}
	else
	{
		ft_putstr("Random ass shit \n");
	}	
	return (0);
}