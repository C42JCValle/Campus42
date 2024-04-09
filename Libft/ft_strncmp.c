#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int	main(void)
{
	char str1[] = "Juan";
	char str2[] = "Joan";
	char str3[] = "Otros";
    size_t n; 

	n = 2;
    printf("Comparando '1' con '2': %d\n", ft_strncmp(str1, str2, n));
	printf("Comparando '2' con '3': %d\n", ft_strncmp(str2, str3, n));
	
	return (0);
}



