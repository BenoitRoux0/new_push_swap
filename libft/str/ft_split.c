/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:34:29 by beroux            #+#    #+#             */
/*   Updated: 2022/11/17 11:00:40 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	cnt_words(const char *s, char c)
{
	size_t	res;
	size_t	i;

	if (!(*s))
		return (0);
	if (!c)
		return (1);
	res = 0;
	i = 1;
	res += (s[0] != c);
	while (s[i])
	{
		res += (s[i] != c && s[i - 1] == c);
		i++;
	}
	res += (!res && s[i - 1] != c);
	return (res);
}

static size_t	ft_wrdlen(const char *s, size_t start, char c)
{
	size_t	res;

	res = 0;
	while (s[start + res] && s[start + res] != c)
		res++;
	return (res);
}

static char	*extract_nxtwrd(size_t *i, const char *s, char c)
{
	size_t	wrdlen;
	char	*res;
	size_t	j;

	while (s[*i] == c)
		(*i)++;
	wrdlen = ft_wrdlen(s, *i, c);
	res = (char *) malloc((wrdlen + 1) * sizeof(char));
	if (!res)
		return ((char *) 0);
	j = 0;
	while (s[*i] && s[*i] != c && j < wrdlen)
	{
		res[j] = s[*i];
		(*i)++;
		j++;
	}
	res[wrdlen] = 0;
	return (res);
}

static void	clear_arr(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(const char *s, char c)
{
	size_t	nb_wrds;
	size_t	i;
	size_t	j;
	char	**res;

	if (!s)
		return (NULL);
	nb_wrds = cnt_words(s, c);
	res = (char **) calloc((nb_wrds + 1), sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < nb_wrds && s[j])
	{
		res[i] = extract_nxtwrd(&j, s, c);
		if (!res[i])
		{
			clear_arr(res, i);
			return (NULL);
		}
		i++;
	}
	res[nb_wrds] = (char *) 0;
	return (res);
}
