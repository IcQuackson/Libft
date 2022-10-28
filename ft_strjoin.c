//TODO delete include
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		total_len;
	int		i;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	printf("total_len = %d\n", total_len);
	if (total_len == 0)
		return (NULL);
	joined = malloc((total_len + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	printf("Passed malloc\n");
	i = 0;
	while (*s1)
		joined[i++] = *s1++;
	while (*s2)
		joined[i++] = *s2++;
	joined[i] = '\0';
	return (joined);
}

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *joined;

	if (argc == 3)
	{
		joined = ft_strjoin(argv[1], argv[2]);
		if (joined == NULL)
			return 1;
		printf("%s %ld\n", joined, ft_strlen(joined));
		free(joined);
	}
	else{
		joined = ft_strjoin("", "");
		if (joined == NULL)
			return 1;
		printf("%s %ld\n", joined, ft_strlen(joined));
		free(joined);
	}
}