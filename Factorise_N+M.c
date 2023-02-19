#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
#include<stdio.h>
#include<unistd.h>
 
int	prime(int nb)
{
	int	a;
 
	a = 2;
	if (nb < 2)
		return (0);
	while (a <= (nb / a))
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
int main()
{
 
	int b;
	int x;
	int y;
	scanf("%d", &x);
	while(x >= 1){
		scanf("%d", &b);
		y = 2;
		if(b == 2)
			y = 3;
		while(y)
		{
			if(prime(y) == 1)
			{
					if(prime(y + b) == 0)
					{
						printf("%d\n", y);
						break;
					}
			}
			y++;
		}
		x--;
	}
}
