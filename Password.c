#include<stdio.h>
//#include<unsitd.h>
#include<stdlib.h>
void tab1(b)
{
	int a = (10 - b);
	printf("%d\n", 3 * a * (a - 1));
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
		while(y < b)
		{
			int nb;
			scanf("%d", &nb);
			y++;
		}
		tab1(b);
		x--;
	}
}
