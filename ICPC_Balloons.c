#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    int a,b,c,d,x,y,j;
 
    char *str;
    scanf("%d", &x);
    while(x)
    {
        scanf("%d", &y);
        str = calloc(1, y + 2);
        scanf("%s", str);
        j = strlen(str) * 2;
        c = j;
        a = 0;
        d = 0;
        while(str[a])
        {
            b = a + 1;
            while(str[b])
            {
                if(str[a] == str[b])
                {
                    d++;
                    j = j - 2;
                    break;
                }
               b++;
            }
            a++;
        }
        printf("%d\n", j + d);
        x--;
    }
}
