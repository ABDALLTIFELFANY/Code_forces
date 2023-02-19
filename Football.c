#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    int a,count,count2,b,x;
    a = 0;
    scanf("%d", &x);
    int y = x;
    char **str = malloc(sizeof(char *) * x+1);
    str[x] = NULL;
    while(x)
    {
        str[a] = calloc(1, 100);
        scanf("%s", str[a]);
        a++;
        x--;
    }
    a = 0;
    count2 = 0;
    char *ab = calloc(1, 100);
    if(y == 1){
        printf("%s\n", str[0]);
        return 0;
    }
    while(str[a])
    {
        count = 0;
        b = a + 1;
        while(str[b])
        {
            if(strcmp(str[a], str[b]) == 0)
                count++;
            b++;
        }
        if(count > count2){
            ab = str[a];
            count2 = count;
        }
        a++;
    }
    printf("%s\n", ab);
}
