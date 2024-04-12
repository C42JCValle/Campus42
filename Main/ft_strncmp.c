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