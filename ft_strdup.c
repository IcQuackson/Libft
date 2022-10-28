
#include <stdlib.h>

static int ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

char *ft_strdup(const char *s)
{
	char	*dup;
	int		s_len;
	int		i;

	s_len = ft_strlen((char *) s);
	dup = malloc((s_len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>

int main()
{
	char str[] = "oh my god";
	char *new = ft_strdup(str);
	str[0] = 'b';
	printf("%s\n", new);
	printf("%s\n", str);

	free(new);
}