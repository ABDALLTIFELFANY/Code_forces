#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
 
int	ft_strcmp(char *s1, char *s2)
{
	int	a;
 
	a = 0;
	while (s1[a] && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}
 
char *rev(char *str)
{
	int b = 0;
	int a = strlen(str) - 1;
	char *cpy = malloc(a + 1);
	while(a >= 0)
	{
		cpy[b] = str[a];
		a--;
		b++;
	}
	cpy[b] = '\0';
	return cpy;
}
int main()
{
	int a = 0;
	char str[200];
	char str1[200];
	scanf("%s", str);
	scanf("%s", str1);
	char *s = rev(str);
	if(ft_strcmp(s,str1) == 0)
		printf("YES\n");
	else
		printf("NO\n");
}
