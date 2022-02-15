/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:04:46 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 16:09:29 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*get_next_word(char const **s, char c)
{
	while (**s && **s == c)
		(*s)++;
	return ((char *)*s);
}

static char	*get_next_dl(char const **s, char c)
{
	while (**s && **s != c)
		(*s)++;
	return ((char *)*s);
}

static unsigned int	count_words(char const *s, char c)
{
	unsigned int	nw;

	nw = 0;
	while (*s)
	{
		get_next_word(&s, c);
		if (*s)
			nw++;
		get_next_dl(&s, c);
	}
	return (nw);
}

static unsigned int	fill_words(char const *s, char c, \
								char **words, unsigned int nw)
{
	unsigned int	i;
	unsigned int	word_size;
	char			*next_word;
	char			*next_dl;

	i = 0;
	while (i < nw)
	{
		next_word = get_next_word(&s, c);
		next_dl = get_next_dl(&s, c);
		word_size = next_dl - next_word + 1;
		words[i] = (char *)malloc(sizeof(char) * word_size);
		if (!words[i])
			return (i);
		ft_strlcpy(words[i], next_word, word_size);
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			**words;
	unsigned int	nw;
	unsigned int	n_filled_words;
	unsigned int	i;

	if (!s)
		return (NULL);
	nw = count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (nw + 1));
	if (!words)
		return (NULL);
	n_filled_words = fill_words(s, c, words, nw);
	if (n_filled_words != nw)
	{
		i = 0;
		while (i < n_filled_words)
		{
			free(words[i]);
			i++;
		}
		free(words);
		return (NULL);
	}
	words[nw] = NULL;
	return (words);
}
