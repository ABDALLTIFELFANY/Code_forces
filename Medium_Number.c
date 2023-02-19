#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h> 
void	ft_sort_int_tab(int *tab)
{
	int	a;
	int	b;
	int	swp;
 
	a = 0;
	while (a < 3)
	{
		b = a + 1;
		while (b < 3)
		{
			if (tab[a] > tab[b])
			{
				swp = tab[a];
				tab[a] = tab[b];
				tab[b] = swp;
			}
			b++;
		}
		a++;
	}
    printf("%d\n", tab[1]);
}
int main()
{
	int x;
	int *tab;
	int a;
	int y = 0;
	scanf("%d", &x);
	while(x >= 1)
	{
        y = 0;
		tab = malloc(3 * sizeof(int));
		while(y < 3)
		{
			scanf("%d", &a);
			tab[y] = a;
			y++;
		}
		ft_sort_int_tab(tab);
		x--;
	}
}
