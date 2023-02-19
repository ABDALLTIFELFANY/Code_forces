#include<stdio.h>
 
int	main()
{
	int	t;
	int	n;
	int	s;
	int	tmp;
	int	i;
 
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		s = 1;
		tmp = n;
		while (tmp > 9)
		{
			if (tmp % 10 != 0)
				s++;
			tmp /= 10;
		}
		printf("%d\n", s);
		i = 1;
		while (n)
		{
			if (n % 10)
			{
				printf("%d", (n % 10) * i);
				if (n / 10)
					printf(" ");
			}
			n /= 10;
			i *= 10;
		}
		printf("\n");
	}
}
