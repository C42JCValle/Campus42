/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:51:13 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/20 14:38:39 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_countwords (char *str)
{
	int i = 0;
	int words = 0;
	int flag = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}	
		i++;
	}
	return (words);
}

static char *ft_wordslot (char *start, int len)
{
	int i;
	char *word;

	i = 0;
	word = malloc ((len + 1) * 1);
	if (!word)
		return (NULL);

	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}	

char	**ft_split(char *str)
{
	int num;
	int words;
	char **result;

	num = 0;
	words = ft_countwords(str);
	result = malloc ((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);

	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
		{
			str++;
		}
		if (*str)
		{
			char *start = str;
			int len = 0;
		
		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
		{
			str++;
			len++;
		}
		
		result[num] = ft_wordslot(start, len);
		if (!result[num])
			return (NULL);
		num++;
		}	
	}
	result[num] = NULL;
	return result; 	
}
	
int main (int argc, char **argv)
{
	int i = 0;
	char **split = ft_split(argv[1]);
	
	while (split[i] != NULL)
	{
		printf("%s\n",split[i]);
		i++;
	}
}