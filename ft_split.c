/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaris <cfaris@student.1337.ma>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 11:28:54 by cfaris            #+#    #+#             */
/*   Updated: 2026-10-15 11:28:54 by cfaris           ###   ########.1337     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**free_tab(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	*next_word(const char *s, char c, size_t *index)
{
	size_t	len;
	size_t	start;
	char	*word;

	len = 0;
	while (s[*index] && s[*index] == c)
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
	{
		len++;
		(*index)++;
	}
	word = ft_substr(s, start, len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words_count;
	size_t	i;
	size_t	index;

	if (!s)
		return (NULL);
	words_count = count_words(s, c);
	result = malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (i < words_count)
	{
		result[i] = next_word(s, c, &index);
		if (!result[i])
			return (free_tab(result, i));
		i++;
	}
	result[i] = NULL;
	return (result);
}
