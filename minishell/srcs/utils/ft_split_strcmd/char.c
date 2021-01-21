/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 22:51:51 by lryst             #+#    #+#             */
/*   Updated: 2020/10/15 21:49:18 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_count_word_char(char *s, int *i, int *n)
{
	while (s[*i] != '\0' && s[*i] != ' ' && s[*i] != '\t' &&
	s[*i] != '"' && s[*i] != '\'' &&
	s[*i] != '\\' && s[*i] != '$' && s[*i] != '>' &&
	s[*i] != '<' && s[*i] != '|')
		(*i)++;
	(*n)++;
}

char	*ft_fill_char(char *s, int *i, char *tab)
{
	int save;

	save = *i;
	while (s[*i] && s[*i] != ' ' && s[*i] != '\t' && s[*i] != '"' &&
	s[*i] != '\'' && s[*i] != '$' && s[*i] != '\\' && s[*i] != '>' &&
	s[*i] != '<' && s[*i] != '|')
		(*i)++;
	return (tab = copy(s, i, save));
}