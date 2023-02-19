#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
 
int main()
{
    int x,y,a,b,even,not;
 
    scanf("%d", &a);
    int *tab = malloc(sizeof(int) * a);
    b = 0;
    even = 0;
    not = 0;
    b = 0;
    while(b < a)
        scanf("%d", &tab[b++]);
    b = 0;
    while(b < a)
    {
        if(tab[b] % 2 != 0)
        {
            not++;
            y = b + 1;
        }
        if(tab[b] % 2 == 0)
        {
            even++;
            x = b + 1;
        }
        b++;
    }
    if(even == 1)
        printf("%d\n", x);
    if(not == 1)
        printf("%d\n", y);
}
