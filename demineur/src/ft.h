/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bod <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:57:14 by bod               #+#    #+#             */
/*   Updated: 2018/09/20 03:21:18 by bod              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_H
# define FT_H
# define size 19
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
void    ft_putchar(char c);
int     ft_check(int x, int y, char grid[size][size], int boolean);
char    init_grid(char grid[size][size]);
void    display_grid(char str[size][size], int boolean);
int     ft_atoi(char *str);
# endif
