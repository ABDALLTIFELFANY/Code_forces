#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
 
	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if(tab[a] == tab[b])
			{
				printf("NO\n");
				return 0;
			}
			b++;
		}
		a++;
	}
	printf("YES\n");
	return 0;
}
int *ft_malloc(int x)
{
	int *tab = malloc(x * sizeof(int));
	return tab;
}
int main()
{
	int x;
	int *tab;
	int y = 0;
	int b;
	int a;
	scanf("%d", &x);
	while(x >= 1)
	{
		y = 0;
		scanf("%d", &b);
		tab = ft_malloc(b);
		while(y < b)
		{
			scanf("%d", &a);
			tab[y] = a;
			y++;
		}
		ft_sort_int_tab(tab,b);
		x--;
	}
}
