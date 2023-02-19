#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int ft_to(char *str)
{
	int a = 0;
	while(str[a] != '\0')
		a++;
	return a;
//	printf("%c%d%c", str[0], a-2,str[b]);
}
 
int main()
{
	char a[100];
	int x;
	int y;
	scanf("%d", &x);
	while(x >= 1)
	{
	scanf("%s", a);
	y = ft_to(a);
	if(y > 10)
	printf("%c%d%c\n", a[0], y-2,a[y - 1]);
	else
		printf("%s\n", a);
	x--;
	}
}
