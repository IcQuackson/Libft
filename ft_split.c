
//delete include
#include <stdio.h>

#include <stdlib.h>

static int	get_word_count(int *max_word_size, char const *s, char c)
{
	int			word_count;
	int			can_count;
	int			current_size;

	can_count = 1;
	word_count = 0;
	current_size = 0;
	while (*s)
	{
		if (*s != c && can_count)
		{
			word_count++;
			can_count = 0;
		}
		else if (*s == c && !can_count)
		{
			can_count = 1;
			if (current_size > *max_word_size)
				*max_word_size = current_size;
		}
		if (*s != c)
			current_size++;
		s++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	int			word_count;
	int			max_word_size;
	int			i;

	max_word_size = 0;
	word_count = get_word_count(&max_word_size, s, c);
	printf("words=%d\n", word_count);
	split = malloc((word_count + 1) * sizeof(char *));
	i = 0;
	while (i < word_count)
	{
		split = malloc((max_word_size + 1) * sizeof(char));
		i++;
	}
	
	return NULL;
}

int main()
{
	ft_split("a.........", '.');
}
