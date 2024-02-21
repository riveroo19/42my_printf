/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:06:46 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/28 12:06:05 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nwords(char *s, char c)
{
	int	cont;
	int	i;

	cont = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && c == s[i])
			i++;
		if (s[i])
			cont++;
		while (s[i] && c != s[i])
			i++;
	}
	return (cont);
}

static int	lword(int *i, char *s, char c)
{
	int	cont;

	cont = 0;
	while (s[*i] == c && s[*i])
		*i = *i + 1;
	while (s[*i] != c && s[*i])
	{
		*i = *i + 1;
		cont++;
	}
	return (cont);
}

static void	*ft_freemem(char **strs, int max)
{
	int	i;

	i = 0;
	while (i <= max)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**w;
	int		nwords;
	int		i;
	int		j;
	int		aux;

	nwords = ft_nwords((char *)s, c);
	w = (char **) malloc((nwords + 1) * sizeof(char *));
	if (!w)
		return (NULL);
	j = 0;
	i = 0;
	while (j < nwords)
	{
		aux = lword(&i, (char *)s, c);
		w[j] = (char *)malloc(sizeof(char) * (aux + 1));
		if (!(w[j]))
			return (ft_freemem(w, j));
		ft_strlcpy(w[j], (char *)&s[i - aux], aux + 1);
		j++;
	}
	w[j] = 0;
	return (w);
}
