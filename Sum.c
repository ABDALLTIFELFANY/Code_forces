#include<stdio.h>
#include<string.h>
 
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	int x;
	int a;
	int b;
	int c;
	scanf("%d", &x);
	while(x >= 1)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if((a + b) == c)
			printf("YES\n");
		else if((b + c) == a)
			printf("YES\n");
		else if((a + c) == b)
			printf("YES\n");
		else 
			printf("NO\n");
	x--;
	}
}
