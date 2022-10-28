
#include <stdlib.h>

static void	ft_bzero(void *s, unsigned int n)
{
	char	*cpy;

	cpy = s;
	while (n > 0)
	{
		*cpy = 0;
		cpy++;
		n--;
	}
	return (s);
}

void *calloc(size_t nelem, size_t elsize)
{
	void* p;

	/* allocate memory block */
	p = malloc(nelem * elsize);
	/* initialize memory block to zero */
	if (p != NULL)
	{
		ft_bzero(p, nelem * elsize);
	}
	return p;
}