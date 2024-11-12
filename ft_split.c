#include "libft.h"

static int	count_word(char const *s1, char sp)
{
	int	i;
	int	count;
	int	check;

	i = 0;
	count = 0;
	check = 1;
	while (s1[i])
	{
		if (s1[i] != sp && check == 1)
		{
			count += 1;
			check = 0;
		}
		else if (s1[i] == sp)
			check = 1;
		i++;
	}
	return (count);
}

static char	*ft_strsdup(char const *s, size_t *j, char sp)
{
	char	*result;
	size_t	i;
	size_t	k;

	i = *j;
	while (s[*j] != sp && s[*j])
		(*j)++;
	result = (char *)malloc((*j - i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	k = 0;
	while (k < *j - i)
	{
		result[k] = s[i + k];
		k++;
	}
	result[k] = '\0';
	return (result);
}

static void	*ft_free(char **prr)
{
	int	i;

	i = 0;
	while (prr[i])
	{
		free(prr[i]);
		i++;
	}
	free(prr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	i;
	char	**prr;
	size_t	len_word;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	len_word = count_word(s, c);
	prr = (char **)malloc((len_word + 1) * sizeof(char *));
	if (prr == NULL)
		return (NULL);
	while (j < len_word)
	{
		while (s[i] == c && s[i])
			i++;
		prr[j] = ft_strsdup(s, &i, c);
		if (!prr[j])
			return (ft_free(prr));
		j++;
	}
	return (prr);
}

// int	main(void)
// {
// 	char **arr;

// 	arr = ft_split("aa,ss,,,,,,,,,ffggggg,,,,,,h,hh", ',');
// 	if (!arr)
// 		return (1);
// 	for (int i = 0; i < 5; i++)
// 		printf("%s\n", arr[i]);
// 	ft_free(arr);
// 	system("leaks a.out");
// }