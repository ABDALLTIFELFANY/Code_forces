#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int main()
{
    char *str;
    str = malloc(101);
    scanf("%s",str);
    char *vowels = "aoyeuiAOYEUI";
    for(int i = 0 ; str[i];i++)
    {
        if(!strchr(vowels, str[i]))
            printf(".%c",(char)tolower(str[i]));
    }
}
