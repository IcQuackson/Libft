
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (len == 0)
		return (NULL);
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && len--)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char *sub = ft_substr("hey", 1, 50);
	printf("%s len=%ld\n", sub, strlen(sub));
	free(sub);
}