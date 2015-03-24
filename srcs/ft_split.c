/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:01:39 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 13:54:52 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == '-' || s[i] == '+')
			i++;
		if (s[i] != '-' && s[i] != '+' && s[i] && ft_isprint(s[i]))
		{
			words++;
			while (s[i] != '+' && s[i] != '-' && s[i])
				i++;
		}
	}
	return (words);
}

static size_t	get_word_length(const char *s)
{
	size_t	length;
	int		i;

	length = 0;
	i = 0;
	while (s[i] != '-' && s[i++] != '+' && s[i])
		length++;
	return (length);
}

char			**ft_split(const char *s)
{
	char	**tab;
	char	tmp;
	int		i;
	int		x;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (!(tab = (char **)malloc(sizeof(char*) * (count_words(s) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == '-' || *s == '+')
			tmp = *(s++);
		if (*s != '-' && *s != '-' && *s && ft_isprint(*s))
		{
			x = 0;
			if (!(tab[i] = ft_strnew(get_word_length(s))))
				return (NULL);
			while (*s != '+' && *s != '-' && *s && ft_isprint(*s))
				tab[i][x++] = *s++;
			tab[i][x] = '\0';
			if (tmp == '-')
				tab[i] = ft_strjoin("-", tab[i]);
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
