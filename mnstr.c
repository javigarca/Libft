#include <stdio.h>
#include "libft.h"
#include <string.h>

int main(void)
{
		char *s1 = "AAAAAAAAAAAAA";
//        char *s2 = "MZIRIBMZE";
        size_t max = strlen(s1);
        const char *i1 = strnstr(s1, s1, max);
        const char *i2 = ft_strnstr(s1, s1, max);

        printf("\n original: %s", i1);
		printf("\n       ft: %s", i2);

		return (0);
}
