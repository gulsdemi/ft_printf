
#include <stdio.h>
#include "ft_printf.h"

int main()
{   ft_printf(NULL);
	printf("[%d]\n", printf("%c", 'a'));
	printf("[%d]\n", ft_printf("%c", 'a'));
	printf("[%d]\n", printf("%d", 42));
	printf("[%d]\n", ft_printf("%d", 42));
	printf("[%d]\n", printf("%s", "samet"));
	printf("[%d]\n", ft_printf("%s", "samet"));
	printf("[%d]\n", printf("%u", 142));
	printf("[%d]\n", ft_printf("%u", 142));
	printf("[%d]\n", printf("%x", 42));
	printf("[%d]\n", ft_printf("%x", 42));
	printf("[%d]\n", printf("%X", 42));
	printf("[%d]\n", ft_printf("%X", 42));
	printf("[%d]\n", printf("%p", 42));
	printf("[%d]\n", ft_printf("%p", 42));
	printf("[%d]\n", printf("%%%%"));
	printf("[%d]\n", ft_printf("%%%%"));
	printf("[%d]\n", printf("%c", NULL));
	printf("[%d]\n", ft_printf("%c", NULL));
	printf("[%d]\n", printf("%d", NULL));
	printf("[%d]\n", ft_printf("%d", NULL));
	printf("[%d]\n", printf("%s", NULL));
	printf("[%d]\n", ft_printf("%s", NULL));
	printf("[%d]\n", printf("%u", NULL));
	printf("[%d]\n", ft_printf("%u", NULL));
	printf("[%d]\n", printf("%x", NULL));
	printf("[%d]\n", ft_printf("%x", NULL));
	printf("[%d]\n", printf("%X", NULL));
	printf("[%d]\n", ft_printf("%X", NULL));
	printf("[%d]\n", printf("%p", NULL));
	printf("[%d]\n", ft_printf("%p", NULL));
	printf("[%d]\n", printf("%c%s%p%d%i%u%x%X", 'a',"samet",42,142,1142,11142,111142,1111142));
	printf("[%d]\n", ft_printf("%c%s%p%d%i%u%x%X", 'a',"samet",42,142,1142,11142,111142,1111142));





}