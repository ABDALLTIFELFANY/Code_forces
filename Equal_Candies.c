#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int findlowest(int *num, int size)
{
    int i;
    int res;
 
    i = 0;
    res = num[0];
    while (i < size)
    { 
        if (num[i] < res)
            res = num[i];
         i++;
    }
    return(res);
}
 
int main()
{
    int i;
    int d;
    int j;
    int l;
    int k;
    int count;
    int boxes;
    int *candy;
    int food;
 
    i = 0;
    d = 1;
    j = 0;
    l = 0;
    food = 0;
    scanf("%d", &count);
    while (count > 0)
    {
        scanf("%d", &boxes);
        candy = malloc(sizeof(int) * boxes);
        while(j < boxes)
        {
            scanf("%d", &k);
            candy[j] = k;
            j++;
        }
        int tot = 0;
        int min = findlowest(candy, boxes);
        while(l < boxes)
        {
            if(candy[l] > min)
                tot += candy[l] - min;
                l++;
        }
        printf("%d\n", tot);
        // while (d < boxes)
        // {
        //     while (findlowest(candy, boxes) != candy[d])
        //     {
        //         candy[d]--;
        //         food++;
        //     }
        //     d++;
        // }
        j = 0;
        l = 0;
        // d = 1;
        // food = 0;
        count--;
    }
}
