#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    int x,a,b;
 
    scanf("%d", &x);
    char *str;
    while(x)
    {
        str = malloc(3);
        scanf("%s", str);
        a = 0;
        b = 0;
        if(str[a] == 'y' || str[a] == 'Y'){
                b++;
                a++;
        }
        if(str[a] == 'e' || str[a] == 'E'){
                b++;
                a++;
        }
        if(str[a] == 's' || str[a] == 'S'){
                b++;
                a++;
        }
        if(b == 3)
            printf("YES\n");
        else
            printf("NO\n");
        free(str);
        x--;
    }
}
