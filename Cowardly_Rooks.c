#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
 
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
        int p;
        scanf("%d", &a);
        scanf("%d", &b);
        int t = b;
        while(t--)
        {
            scanf("%d",&p);
            scanf("%d",&p);
        } 
        if(a == b)
            printf("NO\n");
        else if(a > b) 
            printf("YES\n");
        else
            printf("NO\n");
		x--;
	}
}
