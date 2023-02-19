#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void help(int y)
{
    int a;
    int z;
    int tt = 0;
    int gg = 0;
    while(a < 6)
    {
        if(a < 3){
            tt = tt + y % 10;
            y = y / 10;
        }
        if(a > 2){
            gg = gg + y % 10;
            y = y / 10;
        }
        a++;
    }
    if(gg == tt)
        printf("YES\n");
    else if(gg != tt)
        printf("NO\n");
}
int main()
{
    int x;
    int z = 0;
    int y;
    scanf("%d", &x);
	while(x > 0)
    {
        scanf("%d", &y);
        help(y);
		x--;
	}
}
