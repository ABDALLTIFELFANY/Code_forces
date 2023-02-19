#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void to_up(char *str)
{
	int a = 0;
	while(str[a])
	{
		if(str[a] >= 97 && str[a] <= 127)
			printf("%c", str[a++] - 32);
		else
			printf("%c", str[a++]);
	}
	//write(1, "\n", 1);
}
void to_lw(char *str)
{
	int a = 0;
	while(str[a])
	{
		if(str[a] >= 65 && str[a] <= 90)
			printf("%c", str[a++] + 32);
		else
			printf("%c", str[a++]);
	}
//	write(1, "\n", 1);
}
int main()
{
 
	char str[100];
	int a = -1;
	int b = 0;
	int c = 0;
	scanf("%s", str);
	while(str[++a])
	{
		if(str[a] >= 65 && str[a] <= 90)
			b++;
		else
			c++;
	}
	if(b > c)
		to_up(str);
	else
		to_lw(str);
	printf("\n");
}
