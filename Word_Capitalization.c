#include<unistd.h>
#include<stdio.h>
/*int ft_strlen(char *str)
{
	int x = 0;
	while(str[x])
		x++;
	return x;
}*/
int main()
{
	char str[1000];
	scanf("%s", str);
	int a = 0;
		while(str[a] == ' ' || str[a] == '\t')
			a++;
		if(str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
		printf("%s", str);
}
