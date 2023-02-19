#include<stdio.h>
char *maths(char *str)
{
	int a = 0;
	char swp;
	while(str[a] != '\0')
	{
		int b = a + 1;
		while(str[b] != '\0')
		{
			if(str[b] == '+')
				b++;
			if((str[a] > str[b]))
			{
			swp = str[a];
			str[a] = str[b];
			str[b] = swp;
			}
			b++;
		}
		a++;
	}
	return str;
}
int main()
{
	char x[100];
	scanf("%s", x);
//	char x[] = "1+1+3+1+3";
 	maths(x);
	printf("%s", x);
}
