
//delete include
#include <stdio.h>

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

static int	ft_is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*t_cpy;
	int		trimmed_len;
	int		i;
	int		j;

	i = 0;
	while (s1[i] && ft_is_in_set(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= i && ft_is_in_set(s1[j], set))
		j--;
	trimmed_len = j - i + 1;
	if (trimmed_len == 0)
		return (NULL);
	trimmed = malloc((trimmed_len + 1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	t_cpy = trimmed;
	while (trimmed_len--)
		*t_cpy++ = s1[i++];
	return (trimmed);
}

int main()
{
	char *trimmed = ft_strtrim("abcadas-", "-das");
	if (trimmed == NULL)
		return (1);
	printf("%s len=%ld\n", trimmed, ft_strlen(trimmed));

	free(trimmed);
	
}